# Valgrind / Memory Analysis

> Note: Valgrind is not available on macOS. Analysis was performed
> using `leaks` and AddressSanitizer as equivalent tools.

## 1. heap_example — Memory leak

### Tool output
leaks reported : 1 leak for 16 total leaked bytes
Allocated in person_new() at heap_example.c:21
Called from main() at heap_example.c:51

### Analysis
Type : Memory leak
Object involved : alice->name (char* on the heap)

person_new() performs two malloc() calls :
- One for the Person struct
- One for the name field

When person_free_partial() is called on alice, it frees the Person struct,
alice->name is never freed, losing the only reference to that memory.

Lifetime violation : alice->name is allocated in person_new() and
its ownership is never transferred or freed, causing a leak.

## 2. aliasing_example — Use-after-free

### Tool output
AddressSanitizer reported : heap-use-after-free
READ of size 4 at aliasing_example.c:42
Freed at aliasing_example.c:38
Allocated in make_numbers() at aliasing_example.c:12

### Analysis
Type : Use-after-free (read AND write)
Object involved : int array allocated by make_numbers()

b = a creates a second pointer to the same heap allocation.
This is called aliasing — b is an alias of a, 
pointing to the same memory block. Only one pointer 
is responsible for freeing it.
When free(a) is called, the memory is released.
b still holds the same address but the memory is now invalid.

Two violations occur after free(a) :
- READ  : b[2] is read at line 42
- WRITE : b[3] = 1234 at line 44

Lifetime violation : the memory lifetime ended at free(a) line 38,
but b continues to access it at lines 42 and 44.

## 3. stack_example — No issues

### Tool output
leaks reported : 0 leaks for 0 total leaked bytes.

### Analysis
Type : No memory errors detected
Object involved : None

stack_example only uses stack memory for its local variables.
No heap allocations are made, therefore no leaks are possible
and no manual free() calls are required.

## 4. crash_example — NULL dereference

### Tool output
AddressSanitizer reported : SEGV on unknown address 0x000000000000
WRITE memory access at crash_example.c:32
Hint: address points to the zero page.

### Analysis
Type : NULL dereference (segmentation fault)
Object involved : int* nums

nums[0] = 42 attempts to write to address 0x0,
which is a a guard page.

Lifetime violation : no memory was ever allocated,
nums has no lifetime — it points to nothing valid.
The OS detects the invalid write and sends SIGSEGV.

## 5. AI Error Documentation

### AI Generated explanation

"In aliasing_example, b = a creates a copy of the array in memory.
Both a and b have their own independent heap allocations.
When free(a) is called, only the memory owned by a is released.
b still points to its own valid copy of the data, so reading b[2]
after free(a) is safe and does not constitute a use-after-free."

### Errors identified

**Error 1 :**
"b = a creates a copy of the array in memory"

b is not a copy of the array but a copy of the address of a.

**Error 2 :**
"Both a and b have their own independent heap allocations"

a and b share the same heap allocation since it's a copy of a pointer.

**Error 3 :**
"When free(a) is called, only the memory owned by a is released"

The memory is freed so every pointer still points to the same address but are now 
dangling pointers and the address is not valid, memory is not allocated 
and accessing it will cause undefined behavior.

**Error 4 :**
"b still points to its own valid copy of the data, so reading 
b[2] after free(a) is safe and does not constitute a use-after-free."

It is a use after free here because the memory was freed and we try to 
acces it.