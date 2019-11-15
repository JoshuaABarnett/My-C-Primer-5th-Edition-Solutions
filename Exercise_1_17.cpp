// What happens in the program presented in this section if the input values are all equal?
// What if there are no duplicated values?

// My guess is the program will work normally, the program will print the value name with the number of
// times it is written.
// If there are no duplicated values, each value will print saying it occurs 1 times.

#include <iostream>
int main()
{
  int currVal = 0, val = 0;
  if (std::cin >> currVal) {
    int cnt = 1;
    while (std::cin >> val) {
      if (val == currVal)
        ++cnt;
      else {
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
        currVal = val;
        cnt = 1;
      }
    }
    std::cout << currVal << " occurs "
              << cnt << " times" << std::endl;
  }
      return 0;
}

  // works as expected