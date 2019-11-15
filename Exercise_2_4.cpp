// Write a program to check whether your predictions were correct. If not, study this section until
// you understand what the problem is.

// My prediction was incorrect. 0 is a valid unsigned value, therefore unsigned 10 - signed 10 is 0.

//Exercise 2.3 What output will the following code produce?

/*
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  std::cout << u - u2 >> std::endl;

  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;

  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;
*/

/*
  Expectation:
  32
  4294967264
  32
  -32
  4294967296
  4294967296

*/

#include <iostream>
int main ()
{
  
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  std::cout << u - u2 << std::endl;

  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;

  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;
  return 0;
}

/*
  Actual Output:

  32
  4294967264
  32
  -32
  0
  0
  *\