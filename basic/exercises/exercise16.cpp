#include <iostream>

using namespace std;

int main() {
    int rows = 0;
    string  star ="*";
    cout << "Rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int y = 0; y < i; y++)
           cout << star;
        cout << endl;
    }

    return 0;
}
