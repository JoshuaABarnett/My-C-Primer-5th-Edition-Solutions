
// Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with
// the messages the compiler generates.

//error: missing ) in parameter list for main*
/*
  #include <iostream>
int main ( {
    std::cout << "This is a missing ) in parameter list for main errors " << std::endl;
    return 0;
  }

 Exercise_1_15.cpp:7:10: error: cannot declare ::main to be a global variable
  int main ( {
      ^
      Exercise_1_15.cpp:8:87: error: expected } before ; token
    std::cout << "This is a missing ) in parameter list for main errors " << std::endl;
    ^
    Exercise_1_15.cpp:8:87: error: expected ) before ; token
  Exercise_1_15.cpp:9:5: error: expected unqualified-id before return
  return 0;
  ^~~~~~
  Exercise_1_15.cpp:10:3: error: expected declaration before } token
}
^
*/

// error: used colon, not a semicolon, after endl
/*
  #include <iostream>

int main()
{
  std::cout << "This is a an error of colon instead of semicolon after endl" << std::endl:

    return 0;
}


Exercise_1_15.cpp: In function int main():
Exercise_1_15.cpp:28:90: error: expected ; before : token
std::cout << "This is a an error of colon instead of semicolon after endl" << std::endl:
*/

                                                            // error: missing quotes around string literal
                                                            /*
#include <iostream>
int main ()
{
  std::cout << No quotes here << std::endl;
  return 0;
}

Exercise_1_15.cpp: In function int main():
                                 Exercise_1_15.cpp:49:16: error: No was not declared in this scope
                                 std::cout << No quotes here << std::endl;
^~
                                                            */
                                                                   // error: second output operator is missing
                                                                   /* #include <iostream>
                                 int main ()
                                 {
                                   std::cout << "Missing second output operator" std::endl;
                                   return 0;
                                 }

Exercise_1_15.cpp: In function int main():
                                 Exercise_1_15.cpp:63:82: error: expected ; before std
                                 std::cout << "Missing second output operator" std::endl;
^~~
                                                                   */
                                                                   // error: missing ; on return statement
                                                                   /*                                 #include <iostream>
                                 int main ()
                                 {
                                   std::cout << "Missing semicolon on return statement" << std::endl;
                                   return 0
                                 }

Exercise_1_15.cpp: In function int main():
                                 Exercise_1_15.cpp:78:34: error: expected ; before } token
                                 }
^
*/

                                                                   // declaration error
                                                                   /*
                                                                     #include <iostream>
                                 int main ()
                                 {
                                   int v1 = 0, v2 = 0;
                                   std::cin >> v >> v2;
                                   std::cout << v1 + v2 << std::endl;
                                   return 0;
                                 }

Exercise_1_15.cpp: In function int main():
                                 Exercise_1_15.cpp:91:48: error: v was not declared in this scope
                                 std::cin >> v >> v2;
^
                                 Exercise_1_15.cpp:91:48: note: suggested alternative: v2
                                 std::cin >> v >> v2;
^
                                 v2
                                                                   */
                                                                   // error : cout not defined; should be std::cout
                                                                   /*
                                                                     #include <iostream>
                                 int main ()
                                 {
                                   int v1 = 0, v2 = 0;
                                   std::cin >> v1 >> v2;
                                   cout << v1 + v2 << std::endl;
                                                      return 0;

                                 }

Exercise_1_15.cpp: In function int main():
  Exercise_1_15.cpp:112:36: error: cout was not declared in this scope
  cout << v1 + v2 << std::endl;
^~~~
Exercise_1_15.cpp:112:36: note: suggested alternative:
In file included from Exercise_1_15.cpp:107:0:
/usr/include/c++/7/iostream:61:18: note:   std::cout
extern ostream cout;  /// Linked to standard output
^~~~
                                                                   */


                                                                   // Type error 
                                                                   
                                                                   /*                                                                     #include <iostream>
                                                                     int main ()
                                                                     {
                                                                     int v1 = "Hello", v2 = 0;
                                                                     std::cin >> v1 >> v2;
                                                                     std::cout << v1 + v2 << std::endl;
                                                                     return 0;

                                                                     }

Exercise_1_15.cpp: In function int main():
                                 Exercise_1_15.cpp:135:79: error: invalid conversion from const char* to int [-fpermissive]
                                 int v1 = "Hello", v2 = 0;
^~~~~~~
*/