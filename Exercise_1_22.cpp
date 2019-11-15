// Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions
// that were read.

#include <iostream>
#include "Sales_item.h"
int main ()
{
  Sales_item item1, sum;
  while (std::cin >> item1)
    sum += item1;
  std::cout << sum << std::endl;
  return 0;
}