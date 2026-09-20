#include <iostream>
#include <string>

int main()
{
    std::string foods[5]; // static size and memory
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if (temp == "q") // q to quit
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food:\n";

    for (int i = 0; !foods[i].empty(); i++) // clear the space if user quit
    {
        std::cout << foods[i] << '\n';
    }
    return 0;
}