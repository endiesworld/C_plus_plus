#include <iostream>

int main(){

    const int ci = 0, &cj = ci;
    decltype(ci) x = 0; // x has type const int
    decltype(cj) y = x; // y has type const int& and is bound to x
    //decltype(cj) z; // error: z is a reference and must be initialized
    /*
        Because cj is a reference, decltype(cj) is a reference type. Like any other reference, z must be initialized.
        It is worth noting that decltype is the only context in which a variable defined
        as a reference is not treated as a synonym for the object to which it refers.
        When we apply decltype to an expression that is not a variable, we get the type
        that that expression yields.
    */

    // decltype of an expression can be a reference type
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b; // ok: addition yields an int; b is an (uninitialized) int
    //decltype(*p) c;    // error: c is int& and must be initialized

    /*
        Here r is a reference, so decltype(r) is a reference type. If we want the type to
        which r refers, we can use r in an expression, such as r+0, which is an expression
        that yields a value that has a nonreference type.
        On the other hand, the dereference operator is an example of an expression
        for which decltype returns a reference.
    */

    // decltype of a parenthesized variable is always a reference
    // decltype((i)) d; // error: d is int& and must be initialized
    decltype(i) e;   // ok: e is an (uninitialized) int

    return 0;
}