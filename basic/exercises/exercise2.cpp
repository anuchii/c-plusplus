#include <iostream>
using namespace std;

int main() {
    double sales = 95000.00;
    double stateTax = 0.04;
    double countyTax = 0.02;

    stateTax = stateTax *  sales;
    countyTax = countyTax * sales;

    double totalSales =  sales - stateTax - countyTax ;
    cout << "state Tax: " << stateTax << "€" << endl
         << "County Tax: " << countyTax << "€"<< endl
         << "Total Sales: " << totalSales << "€" << endl;

    return 0;
}