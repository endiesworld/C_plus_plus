#include <iostream>

// Reading an Unknown Number of Inputs

/*
    When we use an istream as a condition, the effect is to test the state of the stream. 
    If the stream is valid—that is, if the stream hasn’t encountered an error—then the test succeeds. 
    An istream becomes invalid when we hit end-of-file or encounter an invalid input, such as reading a value that is not an integer. 
    An istream that is in an invalid state will cause the condition to yield false.
*/

int main() {
    int sum = 0, value = 0;

    // read until end-of-file, calculating a running total of all values read
    std::cout << "Enter first number to sum: " << std::endl;
    while (std::cin >> value) {
        sum += value;
        std::cout << "Current sum is: " << sum << std::endl;
        std::cout << "Enter next number to sum: " << std::endl;
    }
    return 0;
}