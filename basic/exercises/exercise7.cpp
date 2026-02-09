#include <iostream>

using namespace std;

int main() {
    string names [3];
    for (auto & name : names) {
        cout << "Name: ";
        getline(cin, name);
    }
    for (int i  = 0; i< sizeof(names)/sizeof(names[0]); i++) {
    cout << names[i]<< endl ;

    }
    return 0;
}