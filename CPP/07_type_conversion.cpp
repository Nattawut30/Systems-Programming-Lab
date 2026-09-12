#include <iostream>

int main()
{
    // type conversion = conversion a value of one data type to another
    // Implicit = automatic
    // Explicit = Precede value with new data type (int)

    double pi = (int)3.14;
    char x = 100; // cast the number as a character from ASCII TABLe

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << pi << std::endl;
    std::cout << x << std::endl;
    std::cout << score << "%" << std::endl;

    return 0;
}