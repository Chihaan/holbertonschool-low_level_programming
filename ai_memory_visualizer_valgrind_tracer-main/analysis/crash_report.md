# Crash Report — crash_example

## 1. Description
The program crashes with a segmentation fault immediately after
printing "requesting n=0". The crash is deterministic and reproducible.

## 2. Root Cause Analysis
n is initialized to 0 in main().
allocate_numbers(0) returns NULL because n <= 0, no malloc() is called.
The return value is not checked before use.
nums[0] = 42 attempts to write to address 0x0.
The access triggers a page fault, and the kernel sends SIGSEGV to the process.

Note: even with a valid n, malloc() could return NULL if memory 
allocation fails. The fix in section 5 covers both cases.

## 3. Category of undefined behavior
NULL dereference — writing to address 0x0, which is an unmapped virtual address (guard page). 
The access triggers a page fault, caught by the kernel as an invalid access.

## 4. Memory involved
Stack memory — nums is a local variable in main(), stored on the stack.
It points to NULL because malloc() was never called.
The crash occurs on an attempt to write to address 0x0 
which is an unmapped virtual address.

## 5. Suggested fix
Check the return value of allocate_numbers() before use :
if (!nums)
    return 1;