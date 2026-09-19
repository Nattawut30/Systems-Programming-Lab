#include <iostream>

int main()
{
    std::string students[] = {"John", "Tyrian", "Daenerys", "Cercei"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++) // more dynamic based on the size of array!
    {
        std::cout << students[i] << std::endl;
    } // calculaate immediatly

    for (int j = 0; j < sizeof(grades) / sizeof(char); j++)
    {
        std::cout << grades[j] << std::endl;
    }
    return 0;
}