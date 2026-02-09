#include <iostream>
#include <cmath>

using namespace std;
 constexpr double circleArea(double radius) {
     return M_PI * pow(radius, 2);
 }
int main () {
double radius;
     cout << "Enter your Radius: ";
     cin >> radius;
     cout << "The circle Area is: " << circleArea(radius) << endl;


    return 0;
}