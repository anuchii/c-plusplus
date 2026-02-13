#include <iostream>

using namespace std;

int main() {
    bool isCitizen = false;
    bool hasBachelor = false;
    int experience = false;
    char answer = 'x';
    cout << "Do you have an US citinzenship? (j/n): " ;
    cin >> answer;
    if (answer == 'j' || answer == 'J') {
        isCitizen = true;
    }
    answer = 'x';
    cout << "Do you have a bachelor degree? (j/n): " ;
    cin >> answer;
    if (answer == 'j' || answer == 'J') {
        hasBachelor = true;
    }
    answer = 'x';

    cout  << "How many years of experience do you have?: ";
cin >> experience;

   const bool isEligible = isCitizen && (experience >= 2 || hasBachelor);
    if (isEligible) {
        cout << "You have the requirements for the Job 👍🏻" << endl;
    } else {
        cout << "This job is not for you :((";
    }

    return 0;
}