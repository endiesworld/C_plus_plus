#include <iostream>

int main(){
    int i = 0;
    int *const p1 = &i; // we can't change the value of p1; const is top-level
    const int ci = 42; // we can't change ci; const is top-level
    const int *p2 = &ci; // we can change p2; const is low-level, means that p2 can point to a const int.
    const int *const p3 = p2; // right-most const is top-level, left-most is not
    const int &r = ci; // const in reference types is always low-level
    const int *p_test = &i; // test

    /*
    * Top-level const: when the pointer itself is a const.
    * Low-level const: when the object the pointer points to is a const.
    * Whe we copy an object, top-level consts are ignored.
    * When we copy an object, low-level consts are kept, never ignored.
    * When we copy an object, both objects must have the same low-level consts 
    * qualification or there must be a conversion between the types of the objects.
    */

    i = ci; // ok: copying the value of ci; top-level const in ci is ignored
    p2 = p3; // ok: p2 has the same low-level const qualification as p3
    p2 = &i; // error: p2 has a low-level const, p2 can't point to a non-const object
    //int *p = p3; // error: p3 has a low-level const, p has no low-level const
    p2 = &i; // ok: we can convert int to const int
    //int &r_2 = ci; // error:  cna't bind an ordinary int& to a const int object

    return 0;
}