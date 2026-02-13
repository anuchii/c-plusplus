#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int  temperatures[] = {34, 45, 24, 56, 34, 37,};
    int total =  0 ;
    for (int temperature : temperatures) {
        total += temperature;
    }
    double avg = static_cast<double> (total) /(sizeof(temperatures)/sizeof(int));
    cout << "temperature avg: "  <<setprecision (4) << avg << endl;

    return 0;
}
