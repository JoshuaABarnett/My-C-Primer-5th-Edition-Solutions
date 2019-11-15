// Write a program that reads several transactions and counts how many transactions occur for each ISBN.

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
    

