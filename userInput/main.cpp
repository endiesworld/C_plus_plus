#include <iostream>

int addUpTwoNumbers(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Showing the result of variables and functions below." << std::endl;

    int var_1 { 10 };
    int var_2 { 5 };

    // Call the function and store the result of the sum of the variables
    int result { addUpTwoNumbers(var_1, var_2) };

    // Print the result
    std::cout << "Vlaue stored in var_1: "<< var_1 << std::endl;
    std::cout << "value stored in var_2: "<< var_2 << std::endl;
    std::cout << "The sum of var_1 and var_2 is: " << result << std::endl;

    return 0;
}