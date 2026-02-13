#include <iostream>
#include <string>

using namespace std;

int linearSearch(const int numbers[], int target, int size) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numbers[] = {12, 45, 6, 89, 3, 23, 7, 9};
   int index =  linearSearch(numbers, 2, sizeof(numbers)/sizeof(int));
    cout << index << endl;
    return 0;
}
