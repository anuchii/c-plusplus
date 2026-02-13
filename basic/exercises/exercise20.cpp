#include <iostream>
/* 12.02.2021
 * 017-Intermediate-Exercise
*/
using namespace  std;

void swapInt(int *first, int * second) {
    int temp = *first;
    *first =  *second;
    *second = temp;

}
int main () {
    int first = 1;
    int second =  2;
    cout << "Bevor swap()--> first: " << first << " second: " << second << endl;
    swapInt(&first, &second);
    cout << "After swap()--> first: " << first << " second: " << second << endl;
    return 0;
}