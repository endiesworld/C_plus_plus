#include <iostream>
#include <string>
#include "Book_sales.h"

// struct Book_sales
// {
//     std::string isb_no;
//     unsigned stock_level = 0;
//     unsigned units_sold = 0;
//     double cost_prize = 0;
//     double revenue = 0.0;
// };


using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    Book_sales book1, book2;
    double price = 0; // price per book, used to calculate total revenue
    // read the first transactions: ISBN, number of books sold, price per book
    cin >> book1.isb_no >> book1.units_sold >> book1.cost_prize;
    // calculate total revenue from price and units_sold
    book1.revenue = book1.units_sold * book1.cost_prize;

    cin >> book2.isb_no >> book2.units_sold >> book2.cost_prize;
    // calculate total revenue from price and units_sold
    book2.revenue = book2.units_sold * book2.cost_prize;

    if (book1.isb_no == book2.isb_no)
    {
        unsigned totalCnt = book1.units_sold + book2.units_sold;
        double totalRevenue = book1.revenue + book2.revenue;
        // print: ISBN, total sold, total revenue, average price per book
        std::cout << book1.isb_no << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0)
            cout << totalRevenue / totalCnt << endl;
        else
            cout << "(no sales)" << endl;
        return 0; // indicate success
    }
    else
    { // transactions weren’t for the same ISBN
        cerr << "book must refer to the same ISBN" <<  endl;
        return -1; // indicate failure
    }

    return 0;
}

