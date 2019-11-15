/*
What does the following program  do?

int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
 */

/*
Intializes i to be an int object with value 42.
p1 is initialized as a pointer of type int.
p1 points to p1 times p1, or 42 multiplied by 42.
*/
#include <iostream>
int main()
{

  int i = 42;
  int *p1 = &i;
  *p1 = *p1 * *p1;

  std::cout << *p1 << std::endl;
  return 0;
}

// The answer is correct. Returns 1764, which is 42 multiplied by 42.