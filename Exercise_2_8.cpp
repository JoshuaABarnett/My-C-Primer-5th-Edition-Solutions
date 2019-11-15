// Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2,
// then a tab, then an M, followed by a newline.

#include <iostream>
int main ()
{
  std::cout << "\062\115\012" ;
  std::cout << "\062\t\115\n" ;
  return 0;
}
