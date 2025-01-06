#include <iostream>
#include <string>
#include <limits>

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

    // Grabbing user input from the terminal
    int age;
    std::string name;

    std::cout << "Enter your name and age to determine your eligibility." << std::endl;
    std::cout << "Name: ";
    std::cin >> name ;
    std::cout << "Age: ";
    std::cin >> age ;

    if (age >= 18)
    {
        std::cout << name << " is eligible to vote." << std::endl;
    }
    else
    {
        std::cout << name << " is not eligible to vote." << std::endl;
    }

    /*
        Ensure there is no std::cin operation (like std::cin >> someVar;) before using std::getline.
        If mixed input methods are required, use std::cin.ignore() to discard unwanted characters.

        // Flush the input buffer if needed
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    */

    // Reading user input with getline
    // Flush the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string fullName;
    std::string house_Number;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);


    std::cout << "Enter your house number: ";
    std::getline(std::cin, house_Number);

    std::cout << "Full Name: " << fullName << " with house number " << house_Number << std::endl;

    int v1 = 0, v2 = 0;

    std::cout << "The sum of " << v1 
                << " and " << v2 
                << " is " << v1 + v2 << std::endl;
    return 0;
}