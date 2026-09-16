#include <iostream>

int main()
{

    /*
        loop(){
            loop(){
            }
        }

        loop that is inside another loop again
    */

    // Ex.1
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            std::cout << j << ' ';
        }
        std::cout << std::endl;
    }

    // Ex.2
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int x = 1; x <= rows; x++)
    {
        for (int y = 1; y <= columns; y++)
        {
            std::cout << symbol;
        }
        std::cout << std::endl;
    }

    return 0;
}