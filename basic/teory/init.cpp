#include <iostream>


int main() {
    const short maxValue = 6;
    const short minValue = 1;
    srand(time(0));
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;

    std::cout << first << ", " << second << std::endl;


    return 0;
}
