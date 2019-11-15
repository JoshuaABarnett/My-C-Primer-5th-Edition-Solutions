// Test the previous program by giving multiple transactions representing multiple ISBNS.
// The records for each ISBN should be grouped together.


#include <iostream>
#include "Sales_item.h"
int main ()

{
  Sales_item total; // variable to hold data for the next transactions
  // read the first transaction and ensure that there are data to process
  if (std::cin >> total) {
    Sales_item trans; // variable to hold the running sum
    int cnt = 1; // variable to hold transaction count for isbn
    // read and process the remaining transactions
    while (std::cin >> trans) {
      // if we're still processing the same book
      if (total.isbn() == trans.isbn())
        ++cnt,
          total += trans; // update the running total
          
      else {
        // print results for the previous book
        std::cout << total << std::endl;
        std::cout << "The number of transactions for " << total.isbn ()
                  << " is: "<< cnt << std::endl; //print the number of transactions for the isbn
        total = trans; // total now refers to the next book
        cnt = 1;
      }
    }
    std::cout << "The number of transactions for " << total.isbn ()
              << " is: "<< cnt << std::endl, //print the number of transactions for the isbn

    std::cout << total << std::endl; // print the last transaction
    
  } else {
    // no input! warn the user
    std::cerr << "No data?!" << std::endl;
    return -1; // indicate failure
          }
      return 0;
    }

/*
./Exercise_1_23

0-101-10353-X 4 11.77
0-101-10353-X 4 21.77
0-201-20353-X 4 21.77
0-101-10353-X 8 134.16 16.77
The number of transactions for 0-101-10353-X is: 2

0-201-20353-X 4 31.77
0-201-20353-X 2 41.77
0-301-30353-X 1 61.77
0-201-20353-X 10 297.7 29.77
The number of transactions for 0-201-20353-X is: 3

0-301-30353-X 2 21.77
0-301-30353-X 2 31.77
0-401-40353-X 2 21.22
0-301-30353-X 5 168.85 33.77
The number of transactions for 0-301-30353-X is: 3

0-401-40353-X 1 25.22

0-401-40353-X 1 25.22
./Exercise_1_23
./Exercise_1_23
The number of transactions for 0-401-40353-X is: 3
0-401-40353-X 4 92.88 23.22
*/