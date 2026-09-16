#include <iostream>

int main()
{
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num1 = (rand() % 6) + 1; // random number from 1-6, roll the dice
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    return 0;
}