#ifndef BOOK_SALES_H
#define BOOK_SALES_H

#include <string>


struct Book_sales
{
    std::string isb_no;
    unsigned stock_level = 0;
    unsigned units_sold = 0;
    double cost_prize = 0;
    double revenue = 0.0;
};

#endif // BOOK_SALES_H

/*
    C++ programs also use the preprocessor to define header guards. Header
    guards rely on preprocessor variables (§ 2.3.2, p. 53). Preprocessor variables have
    one of two possible states: defined or not defined. The #define directive takes a
    name and defines that name as a preprocessor variable. There are two other directives that test whether a given preprocessor variable has or has not been defined:
    #ifdef is true if the variable has been defined, and #ifndef is true if the variable
    has not been defined. If the test is true, then everything following the #ifdef or
    #ifndef is processed up to the matching #endif.
*/