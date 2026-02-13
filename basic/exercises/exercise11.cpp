#include <iostream>

using namespace std;


int main () {
    int number1 = 0;
    int number2 = 0;

    cout << "your numbers: ";
    cin >> number1 >> number2;
    const int bigNumber =  (number1> number2) ? number1 :  number2;
    cout << bigNumber;



    return 0;
}
