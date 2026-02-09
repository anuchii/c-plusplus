#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left;
    cout << setw(10) << "Spring" << setw(10) << "nice" << endl
         << setw(10) << "sommer" << setw(10) << "hot" << endl;
    cout << " =====NUMBERS-FORMAT======";

    cout << fixed << setprecision(2) << 12.34567;

    return 0;
}
