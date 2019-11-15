// Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
// int i = 0, &r1 = i; double d = 0, &r2 = d;
// (a) r2 = 3.14159;
// (b) r2 = r1;
// (c) i = r2;
// (d) r1 = d;

// (a) valid, the value assigned to d and r2 is now 3.14159
// (b) valid, r2 is assigned to 0
// (c) valid, i is assigned to 0, but as an int
// (d) valid, r1 is assigned to 0, but as an int


// The following code will show the results of the above assignments.
// Some variable names are changed to avoid compiler errors.

#include <iostream>
int main()
{
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;
  r2 = 3.14159;
  //r2 = 3.14159;
  //r2 = r1;
  //i = r2;
  //r1 = d;

  std::cout << r2 << std::endl;

  
  int j = 0, &t1 = j;
  double e = 0, &t2 = e;
  t2 = t1;
  std::cout << t2 << std::endl;

  int k = 0, &u1 = k;
  double f = 0, &u2 = f;
  k = u2;
  std::cout << k << std::endl;


  int l = 0, &v1 = l;
  double g = 0, &v2 = g;
  v1 = g;
                    std::cout << v1 << std::endl;


  return 0;
  
  
}