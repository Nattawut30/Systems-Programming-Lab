#include <iostream>

int main()
{
    // do while loop = do some block of code first,
    // THEN repeat again if condition is true

    int number;

    do
    {
        std::cout << "Enter a positive only #: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is: " << number;

    // good example of this is video game where they keep asking us wanna play continune or quit?

    return 0;
}