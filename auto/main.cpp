#include <iostream>

int main(){
    /*
        To declare the variable, we have to know the type of that expression
        we can let the compiler figure out the type for us by using the auto type specifier.
        By implication, a variable that uses auto as its type specifier must have an initializer
    */
    // the type of item is deduced from the type of the result of adding val1 and val2

    int val1 = 1, val2 = 2;
    auto item = val1 + val2; // item initialized to the result of val1 + val2

    auto i = 0, *p = &i;    // ok: i is int and p is a pointer to int
    // auto sz = 0, pi = 3.14; // error: inconsistent types for sz and pi 

    std::cout << item << std::endl;

    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)

    const int ci = i, &cr = ci;
    auto b = ci;  // b is an int (top-level const in ci is dropped)
    auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i;  // d is an int* (& of an int object is int*)
    auto e = &ci; // e is const int* (& of a const object is low-level const)
}