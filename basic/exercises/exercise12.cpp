#include <iostream>

using namespace std;

int main() {
    int nr1 = 0;
    int nr2 = 0;
    double result = 0;
    char operatorMath = ' ';

    cout << "your 2 numbers : ";
    cin >> nr1 >> nr2;
    cout << "your operator: ";
    cin >> operatorMath;

    switch (operatorMath) {
        case '+':
            result = nr1 + nr2;
            break;
        case '-':
            result = nr1 - nr2;
            break;
        case '*':
            result = nr1 * nr2;
            break;
        case '/':
            if (nr2 != 0) {
                result = (double) nr1 / nr2;
            }else {
                result = 0;
               cout << "Division by zero is not allowed. Result set to 0; " << endl;
            }
            break;
        default :
            cout << "your operator is invalid! " << endl;
    }
    cout << "Your result is: " << result;

    return 0;
}