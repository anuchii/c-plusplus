#include <iostream>
 using namespace  std;

int max( int number1, int number2 ) {
 return  (number1> number2) ?  number1 : number2;
}
int main() {
 int nr1 = 0;
 int nr2 = 0;
 cout << "your numbers: ";
 cin >> nr1 >> nr2;
 int result  = max(nr1, nr2);
 cout <<"the Bigger number is: " << result;
 return 0;
}