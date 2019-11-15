// Explain the key differences between pointers and references.

/*
A reference is not an object.
A reference cannot be reassigned and must be assigned at initialization.

A pointer is a variable that holds memory address of another vA pointer can be reassigned.
ariable. A pointer needs to be dereferenced with * operator to access the memory location it points to.

A reference variable is an alias, another name for an already existing variable. 
A defined reference cannot refer to a different object.
A used reference returns the object to which the reference was initially bound.
A pointer can be reassigned.
When we assign to a pointer, we give the pointer itself a new value.
Assignment makes the pointer point to a different object.

A pointer is a variable that holds memory address of another variable. A pointer needs to be dereferenced with * operator to access the memory location it points to.

A reference variable is an alias, another name for an already existing variable. 

A pointer has its own memory address and size on the stack.
A reference shares the same memory address with the original variable  but also takes up some space on
the stack.

Pointers can be assigned NULL directly, reference cannot.

Pointers can point to pointers offering extra levels of indirection.
References can only offer one level of indirection.

Various arithmetic operations can be performed on pointers.
There is no such thing as reference arithmetic.
*/