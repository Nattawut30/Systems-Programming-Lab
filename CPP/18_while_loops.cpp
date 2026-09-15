#include <iostream>

int main()
{

    // like an if statement except...
    // we can repeat some code potentially
    // and infinite amount of time

    std::string name;

    while (name.empty()) // if it's 'true' = execute this code a potentially amount of times
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello, " << name;

    while (1 == 1)
    {
        std::cout << "HELP! I'm stuck in an infinite loops!"; // don't try this at home
    }

    return 0;
}