#include <iostream>

using namespace std;

int main() {
    double sales = 0.0;
    double tenProcent = 0.10;
    double fithteenProcent = 0.15;
    double twentyProcent = 0.20;

    cout << "Enter your sales: ";
    cin >> sales;
    if (sales < 10'000) {
        tenProcent = sales * tenProcent;
        sales -= tenProcent;
    }else if (sales < 15'000) {
        fithteenProcent = sales * fithteenProcent;
        sales -= fithteenProcent;
    }
    else {
         twentyProcent = sales * twentyProcent;
         sales -= twentyProcent;
    }
    cout << "Your total sales  =  " << sales;
    return 0;
}