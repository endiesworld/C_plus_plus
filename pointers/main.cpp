#include <iostream>

int main(){

    int i = 42;
    int val = 50;
    int &r = i; // & follows a type and is part of a declaration; r is a reference
    int *p;     // * follows a type and is part of a declaration; p is a pointer
    p = &i;    // & is used in an expression as the address-of operator
    *p = i;   // * is used in an expression as the dereference operator
    int &r2 = *p; // & is part of the declaration; * is the dereference operator  

    //*p = &val;  // error: p is a pointer, so it can't be assigned the address of val. We can only do this during pointer definition
    p = &val;  // ok: p now points to val
    *p = 5;   // ok: val is now 5

    int ival = 1024;
    int *p2 = 0 ; // p2 is initialized but addresses no object i.e it is a null pointer
    int *p3 = &ival; // p3 is initialized to hold the address of ival

    if(p2) // if p2 is not a null pointer
        std::cout << "p2 is not a null pointer" << std::endl;
    else // if p2 is a null pointer
        std::cout << "p2 is a null pointer" << std::endl;
    if(p3) // if p3 is not a null pointer
        std::cout << "p3 is not a null pointer" << std::endl;
    
    return 0;
}