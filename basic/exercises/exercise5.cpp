#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left;
    cout    << setw(15) << "Course" << setw(10) << "Students" << endl <<
        left<< setw(15) << "C++" << right << setw(10) << 100 << endl <<
            left << setw(15) << "JavaScript" << right << setw(10) << 50;


    return 0;
}
