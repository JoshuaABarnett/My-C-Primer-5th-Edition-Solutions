// Determine the type of each of the following literals. Explain the differences among the literals
// in each of the four examples:
// (a) 'a', L'a', "a", L"a"
// (b) 10, 10u, 10L, 10uL, 012, 0xC
// (c) 3.14, 3.14f, 3.14L
// (d) 10, 10u, 10., 10e-2

// (a) 'a' is a character literal of type char, L'a' is a character literal of type wchar_t,
// "a" is a string literal (a array of constant chars), L"a" is a literal of type wchar_t
// The compiler appends a null character /('\') to every string literal, so the actual size of a string
// literal is one more than its apparent size.

// (b) 10 is an integer decimal literal of type signed, 10u is a decimal integer literal of type unsigned,
// 10L is an integer decimal literal of type long, 10uL is a decimal integer literal of type unsigned long,
// 012 is an octal integer literal, 0xC is a hexadecimal integer literal
// The decimal literals are signed by default, the octal and hexadecimal literals can be either signed
// or unsigned types. A decimal literal has the smallest type of int, long, or long long (i.e., the first type
// in this list) in which the literal's value fits. Octal and hexadecimal literals have the smallest type of
// int, unsigned int, long, unsigned long, long long, or unsigned long long in which the literal's value fits.

// (c) 3.14 is a floating point literal, 3.14f is a floating-point literal of type float, 3.14L is a 
// floating-point literal of type long double.
// The floating-point literals have type double by default.

// (d) 10 is an integer decimal literal of type signed, 10u is an decimal integer literal of type unsigned,
// 10. is a floating-point literal of type double, 10e-2 is floating-point literal of type double
// Floating point literals have type double by default, they include either a decimal point or an exponent
// specified using scientific notation. 
