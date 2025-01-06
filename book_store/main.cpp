#include <iostream>
#include "Sales_item.h"

int main()
{
    int a, b ;
    Sales_item item1, item2;
    while(std::cin >> item1)
    {
        if(item2.isbn() == item1.isbn())
        {
            item2 += item1;
            std::cout << "The sum of all items is: " << item2 << std::endl; // print their sum
        }
        else
        {
            item2 = item1;

        }
        
    }
    
    return 0;
}