// Compile and run the program from this section giving it only equal values as input. Run it again
// giving it values in which no number is repeated.


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

/*
joshua@JB-DESKTOP-PC:~/Desktop/Projects/C++$ joshua@JB-DESKTOP-PC:~/Desktop/Projects/C++$ ./Exercise_1_17 
42 42 42 42 42 42
./Exercise_1_17 
42 occurs 27 times
*/

/*
joshua@JB-DESKTOP-PC:~/Desktop/Projects/C++$ ./Exercise_1_17 
1 2 3 4 5 6 7 8 9 12 31 14 15 62 73 48 ./Exercise_1_17

1 occurs 1 times
2 occurs 1 times
3 occurs 1 times
4 occurs 1 times
5 occurs 1 times
6 occurs 1 times
7 occurs 1 times
8 occurs 1 times
9 occurs 1 times
12 occurs 1 times
31 occurs 1 times
14 occurs 1 times
15 occurs 1 times
62 occurs 1 times
73 occurs 1 times
48 occurs 1 times
*/