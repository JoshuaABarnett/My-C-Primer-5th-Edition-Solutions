// Revise the program you wrote for the exercises in Section 1.4.1 (p.13) that printed a
// range of numbers so that it handles input in which the first number is smaller than the second.

// Exercise 1.11: Write a program that prompts the user for two integers. Print each number in the range
// specified by those two integers.

#include <iostream>
int main ()
{
  int v1 = 0, v2 = 0;
  std::cout << "Enter two numbers: " << std::endl; 
  std::cin >> v1 >> v2;
  std::cout << "The numbers in the range of " << v1 << " and " << v2
            << " are: " << std::endl;
  while(v1 <= v2) {
    std::cout << v1 << std::endl;
    v1++;
  }
  return 0;
}