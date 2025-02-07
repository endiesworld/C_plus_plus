#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    vector<string> welcomMessage{"Hello", "my", "name", "is", "Emmanuel"};
    vector<string> welcomMessage2{"Hello", "my", "name", "is", "Emmanuel"};

    /*
        We can also initialize a vector from a count and an element value. The count determines how many elements the vector will have; the value provides the initial
        value for each of those elements:
    */

    vector<string> welcomMessage3(5, "Hello");
    vector<int> ivec(10, -1);       // ten int elements, each initialized to -1
    vector<string> svec(10); // ten strings;

    /*
        vector<T> v1 vector that holds objects of type T. Default initialization;
        v1 is empty.
        vector<T> v2(v1) v2 has a copy of each element in v1.
        vector<T> v2 = v1 Equivalent to v2(v1), v2 is a copy of the elements in v1.
        vector<T> v3(n, val) v3 has n elements with value val.
        vector<T> v4(n) v4 has n copies of a value-initialized object.
        vector<T> v5{a,b,c ... } v5 has as many elements as there are initializers; elements
        are initialized by corresponding initializers.
        vector<T> v5 = {a,b,c ... } Equivalent to v5{a,b,c ... }.
    */

    /*
        () is used to initialize the vector with a size and a value, while {} is used to initialize the vector with a list of elements.
    */
    vector<int> v1(10);    // v1 has ten elements with value 0
    vector<int> v2{10};    // v2 has one element with value 10
    vector<int> v3(10, 1); // v3 has ten elements with value 1
    vector<int> v4{10, 1}; // v4 has two elements with values 10 and 1

    /*
        Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. 
        For those that are not legal, explain why they are illegal.
        (a) vector<vector<int>> ivec; //ANSWER: Legal, ivec is a vector that holds vectors of int.
        (b) vector<string> svec = ivec; // ANSWER: Illegal, ivec is a vector of vectors of int, svec is a vector of strings.
        (c) vector<string> svec(10, "null"); // ANSWER: Legal, svec is a vector of strings with 10 elements, each initialized to "null".

        How many elements are there in each of the following vectors? What are the values of the elements?
        (a) vector<int> v1; // integer vector v1 has 0 element but can contain any number of elements.
        (b) vector<int> v2(10); // integer vector v2 has 10 elements, each initialized to 0.
        (c) vector<int> v3(10, 42); // integer vector v3 has 10 elements, each initialized to 42.
        (d) vector<int> v4{10}; // integer vector v4 has 1 element with value 10. 
        (e) vector<int> v5{10, 42}; // integer vector v5 has 2 elements with values 10 and 42.
        (f) vector<string> v6{10}; // string vector v6 has 1 element with value "10".
        (g) vector<string> v7{10, "hi"}; // string vector v7 has 2 elements with values "10" and "hi".
    */

    vector<string> v6{10};
    vector<string> v7{3, "hi"};

    for(auto i : v7){
        std::cout << i << std::endl;
    }

    // Adding elements to a vector
    vector<int> v8; // empty vector
    for(int i = 0; i != 100; ++i){
        v8.push_back(i);
    }

    // Read sequence of int from cin
    vector<int> v9;
    int i;
    cout << "Reading sequence of int from cin" << endl;
    while(cin>>i){
        v9.push_back(i);
    }
    
    cout<< "Outputing the sequence of int read from cin" << endl;
    for(auto i : v9){
        cout << i << endl;
    }

    // vector Operations
    /*
        v.empty() Returns true if v is empty; otherwise returns false.
        v.size() Returns the number of elements in v.
        v.push_back(t) Adds an element with value t to end of v.
        v[n] Returns a reference to the element at position n in v.
        v1 = v2 Replaces the elements in v1 with a copy of the elements in v2.
        v1 = {a,b,c ... } Replaces the elements in v1 with a copy of the elements in the
        comma-separated list.
        v1 == v2
        v1 != v2
        v1 and v2 are equal if they have the same number of elements and each
        element in v1 is equal to the corresponding element in v2.
        <, <=, >, >= Have their normal meanings using dictionary ordering.
    */

    return 0;
}