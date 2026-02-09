#include <iostream>

using namespace std;

int main() {
    string street;
    string city;
    string state;
    short zipCode;
    cout << "Street: ";
    getline(cin, street);
    cout << "City: ";
    getline(cin, city);
    cout << "State: ";
    getline(cin, state);
    cout<< "Zip Code: ";
    cin >> zipCode;

    cout << street << endl
         << city << ", " << state << ", " << zipCode << endl;


    return 0;
}