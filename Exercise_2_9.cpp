// Explain the following definitions. For those that are illegal, explain what's wrong and how to correct it.
// (a) std::cin >> int input_value;
// (b) int i = { 3.14 };
// (c) double salary = wage = 9999.99;
// (d) int i = 3.14;

// (a) input_value is an int that takes the value of the user input

// (b) error: narrowing conversion required. Correct: double i = {3.14}

// (c) illegal, salary is given the incompatible value wage.
// The correct form would look like: double salary = 9999.99, wage = 9999.99;

// (d) ok, but value will be truncated. Better will be double i = 3.14