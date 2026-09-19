#include <iostream>

int main()
{
    // foreach loop = loop that eases the traversal over an
    // iterable data set

    std::string students[] = {"Jon", "Sansa", "Arya", "Cercei"};
    int scores[] = {65, 72, 81, 94};

    for (std::string student : students) // much clean, and better
    {
        std::cout << student << std::endl;
    }

    // less syntax but less flexible

    for (int score : scores)
    {
        std::cout << score << std::endl;
    }

    return 0;
}