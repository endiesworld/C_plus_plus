#include <iostream>


int main(){
    int first_number ;
    int second_number ;

    std::cout << "Enter the first number: ";
    std::cin >> first_number;
    std::cout << "Enter the second number: ";
    std::cin >> second_number;

    if (first_number > second_number){
        while( first_number > second_number){
            std::cout << "The first number is " << first_number
                        << ", while the second number is " << second_number 
                        << " and it is greater than the second number by: " << first_number - second_number << std::endl;
            first_number -= 1;
        }
    } 
    else if (first_number < second_number){
        while (first_number < second_number)
        {
            std::cout << "The first number is " << first_number
                        << ", while the second number is " << second_number 
                        << " and it is less than the second number by: " << second_number - first_number << std::endl;
            first_number += 1;
        }
    }
    else
    {
        std::cout << "The first number is equal to the second number." << std::endl;
    }
    return 0;
}