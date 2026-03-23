# Memory Maps Analysis

## 1. Stack vs Heap

### Stack
The stack is memory used within the scope of a function.
It is managed automatically — variables are created when the function
is called and destroyed when it returns.
The stack is fast but limited in size.

### Heap
The heap is memory allocated dynamically at runtime using malloc().
It persists beyond function calls and is accessible anywhere in the program.
It must be explicitly freed with free(), otherwise it causes a memory leak.

|		| Stack				| Heap					|
|		|				|					|
| Management 	| Automatic 			| Manual (malloc/free) 			|
| Lifetime 	| Tied to function scope 	| Until free() is called 		|
| Speed 	| Fast 				| Slower 				|
| Risk 		| Dangling pointer		| Memory leak, use-after-free		|

## 2. stack_example — Stack frames and recursion

Each recursive call to walk_stack() creates a new stack frame
containing its own independent copies of local variables
(local_int, local_buf, marker). These variables share the same
name but occupy different memory addresses and hold different values.

Stack grows downward :
0x16b206be8  [ depth=0 | local_int=100 | local_buf='A' | marker=0  ]
0x16b206ba8  [ depth=1 | local_int=101 | local_buf='B' | marker=10 ]
0x16b206b68  [ depth=2 | local_int=102 | local_buf='C' | marker=20 ]
0x16b206b28  [ depth=3 | local_int=103 | local_buf='D' | marker=30 ]

On exit, frames are destroyed in reverse order with the LIFO 
principle (Last In, First Out).

## 3. heap_example — Allocations and memory leak

Two Person structs are allocated on the heap via person_new().
Each struct contains a name field which is itself a separate heap allocation.

Heap layout :
0x100c21a30  [ alice ]
               name → 0x100c21a40 [ "Alice\0" ]
               age = 30

0x100c21a50  [ bob ]
               name → 0x100c21a60 [ "Bob\0" ]
               age = 41

Memory freed :
- bob->name  ✓ freed at main
- bob        ✓ freed at main
- alice      ✓ freed by person_free_partial()
- alice->name ✗ never freed → MEMORY LEAK (16 bytes)

person_free_partial() only frees the Person struct,
not the name field, causing alice->name to be leaked.

## 4. aliasing_example — Pointer aliasing and use-after-free

a and b are two pointers pointing to the same heap allocation (aliasing).
When free(a) is called, the memory is released but b still holds the same address.

Heap layout before free :
0xad6c00020  [ 0, 11, 22, 33, 44 ]  ← a and b both point here

After free(a) :
0xad6c00020  [ freed memory ]  ← a and b still point here, but memory is invalid

Bugs identified :
- READ use-after-free  → b[2] read after free(a)  (aliasing_example.c:42)
- WRITE use-after-free → b[3] = 1234 after free(a) (aliasing_example.c:44)

Both detected by AddressSanitizer :
"ERROR: AddressSanitizer: heap-use-after-free"

## 5. crash_example — NULL dereference and segmentation fault

allocate_numbers() returns NULL when n=0.
The program then tries to write to address 0x0 which is protected by the OS.

Heap layout :
nums = NULL (0x0)  ← no allocation was made

Bug identified :
nums = allocate_numbers(0)  → returns NULL
nums[0] = 42               → tries to write at address 0x0

Result :
The OS detects the invalid memory access and kills the program.
→ Segmentation fault

## 6. AI Error Documentation

### AI Generated explanation

"When free(a) is called, the pointer a is automatically set to NULL by the system. 
b still points to the old address, which is why we get a dangling pointer. 
The memory is freed and reinitialized to zero."

### What we know

When a is freed, the pointer is not automatically set to NULL, it still holds the same adress as before : 

"after free(a): b=0xad6c00020 (dangling)" ||  main aliasing_example.c:38

The memory is not reinitialized to zero, 1024 proves that memory holds an arbitrary value reused by the system :

reading b[2]=1024. || READ of size 4 at aliasing_example.c:42
