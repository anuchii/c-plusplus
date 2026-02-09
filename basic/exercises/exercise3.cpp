//fahrenheit to celsius
#import <iostream>

using namespace std;

int main() {
//celsius = (F-32) * 5/9
    double fahrenheit = 0;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) / 1.8;
    cout << "Temperature in Celsius:  " << celsius << endl;

    return 0;
}