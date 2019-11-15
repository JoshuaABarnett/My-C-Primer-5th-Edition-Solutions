// What output will the following code produce?

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