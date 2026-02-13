#include <iostream>

using namespace std;

void swap(int numbers[], int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void bubbleSortArrays(int numbers[], size_t size) {
    for (int pass = 0; pass < size; pass++) {
        for (int i = 1; i < size ; i++) {
            if (numbers[i] < numbers[i - 1])
                swap(numbers, i, (i - 1));
        }
    }
}

int main() {
    int numbers[] = {2, 4, 1, 5, 6};
    int size = sizeof(numbers) / sizeof(int);
    bubbleSortArrays(numbers, size);
    for (int i = 0; i < size; i++)
        cout << numbers[i] << ", ";
    return 0;
}
