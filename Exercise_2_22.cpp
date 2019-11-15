/*
Assuming p is a pointer to int, explain the following code:
if (p) // ...
if (*p) // ...
 */

// if (p) has value 0 the condition is false, otherwise it is true.
// if (*p) will give undefined behavior