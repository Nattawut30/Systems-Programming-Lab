#include <iostream>

int main()
{
    // if statements = do something if a condition is true
    // if not, then don't do it or do something else.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // orders of the if statements matters
    if (age >= 100)
    {
        std::cout << "You are too old for this club!";
    }
    else if (age >= 18)
    {
        std::cout << "Welcome to the club!";
    }
    else if (age < 0)
    {
        std::cout << "You haven't been born yet fetus!";
    }
    else
    {
        std::cout << "You are not allowed to enter!";
    }

    return 0;
}