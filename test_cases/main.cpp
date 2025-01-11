#include <iostream>

int main(){

    int i = 100, sum = 0 ;
    int &iRef = i; // reference to the object i
    for(int i = 0; i != 10; i++)
        sum += i ;
        std::cout << "i: "<< i << "\nsum: " << sum <<  std::endl ;
    std::cout << "i: "  << i << " sum: " << sum << std::endl;

    iRef = 3;
    std::cout << "i: " << i << " sum: " << sum << std::endl;

    int &iRef2 = iRef;
    iRef2 = 4;

    std::cout << "i: " << i << " sum: " << sum << std::endl;

    return 0;
}