# 0x0B-malloc_free

## Learning Objectives
- What is the difference between automatic and dynamic allocation.
- What is malloc and free and how to use them.
- Why and when use malloc.
- How to use valgrind to check for memory leak.




- The `malloc` function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and `malloc` will return a pointer to the reserved space.

- When the amount of memory is not needed anymore, you must return it to the operating system by calling the function `free`.


## Concept

- [Automatic and dynamic allocation, malloc and free](./https://alx-intranet.hbtn.io/concepts/62)


## Tasks

- 0-create_array.c - a function that creates an array of chars, and initializes it with a specific char.
- 1-strdup.c - a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
