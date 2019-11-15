// Write code to change the value of a pointer. Write code to change the value to which the pointer points.

#include <iostream>
// #include <stdio>
int main()
{

  int aval = 10;
  int bval = 20;
  int * p1;

  p1 = &aval; // pointer p1 points to aval

  std::cout << *p1 << std::endl;

  aval = 15;

  std::cout << *p1 << std::endl;

  p1 = &bval; // pointer p1 points to bval, the value to which the pointer points is changed

  std::cout << *p1 << std::endl;


  return 0; 
}

