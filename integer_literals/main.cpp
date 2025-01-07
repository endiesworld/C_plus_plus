#include <iostream>

std::string global_str;
int global_int;

int main() {
    int a = 25 ;
    int b = 031 ;
    int c = 0x19 ;

    float i, j, k;

    std::cout << "a = " << a << std::endl ;
    std::cout << "b = " << b << std::endl ;
    std::cout << "c = " << c << std::endl ;

    i = 3.14159 ;
    j = 314.159e-2 ;
    k = 0.0314159e2 ;

    std::cout << "i = " << i << std::endl ;
    std::cout << "j = " << j << std::endl ;
    std::cout << "k = " << k << std::endl ;

    int x = {3} ; // warning: narrowing conversion of '3.14e+0' from 'double' to 'int' inside {3.142 } [-Wnarrowing]
    std::cout << "x = " << x << std::endl ;

    int y = 3.142 ;
    std::cout << "y = " << y << std::endl ;

    int local_int ;
    std::string local_str ;
    std::cout << "local_int = " << local_int << std::endl ;
    std::cout << "local_str = " << local_str << std::endl ;
    std::cout << "global_int = " << global_int << std::endl ;
    std::cout << "global_str = " << global_str << std::endl ;

    return 0;
}