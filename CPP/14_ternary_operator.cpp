#include <iostream>

int main()
{
    // ternary operator ?: replacement to an if/else statement
    // condition ? expression1 : expression2

    int grade = 75;
    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail!\n";

    int number = 9;
    number % 2 == 1 ? std::cout << "Odds\n" : std::cout << "Even\n";

    bool hungry = true; // more cleaner
    std::cout << (hungry ? "You are hungry\n" : "You are full\n");

    return 0;
}