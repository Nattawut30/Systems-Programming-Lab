#include <iostream>

int main()
{
    // 2D-array = {array1, array2, array3}
    // A grid in the matrix

    std::string cars[][3] = {{"Mustang", "Escaper", "F-150"}, // 2 brackets for 2D array: first is rows, second is column
                             {"Corvette", "Equinox", "Silverado"},
                             {"Challenger", "Durango", "Ram-1500"}};

    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << "\n";

    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << "\n";

    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << "\n";

    std::cout << '\n';

    // this worked but there is a better way to write this!

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++)
    {
        std::cout << cars[i] << std::endl; // give us a memory address
        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << " "; // give us an elements
        }
        std::cout << std::endl;
    }

    return 0;
}