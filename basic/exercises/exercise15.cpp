#include <iostream>

using namespace std;

int main () {
    int min =  1;
    int max =  10;
    int guess = 0;
    int count = 0;
    srand(time(0));
    int number =  rand()% (max -min +1) + min;
    cout << "Guess a number btw 1 and 10" << endl;
    while (guess != number) {
        cout << "Guess: ";
        cin >> guess;
        count ++;
    }
    cout  << "Tries: " << count << endl;
    return 0;

}