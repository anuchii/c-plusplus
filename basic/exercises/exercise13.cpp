#include <iostream>

using namespace std;

int main() {
    int nr = 0;
    int result = 1;
    cout << "Enter your number: ";
    cin >> nr;
    if (nr == 0) {
        cout << "The factorial of 0 is 1;" << endl;
        return 0;
    }
    for (int i = 1; i <= nr; i++) {
        result *= i;
    }
    cout << "The factorial of your number is: " << result << endl;


    return 0;
}
