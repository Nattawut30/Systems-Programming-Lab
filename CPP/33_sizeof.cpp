#include <iostream>

int main()
{

    // sizeof() = determines the size in bytes of a:
    // varaibles, data type, class, objects, etc.

    std::string name = "Nattawut";
    double gpa = 3.4;
    char grade = 'S';
    bool adult = true;

    char ranks[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Leon", "Grace", "Sherry", "Gideon"};

    std::cout << sizeof(double) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(adult) << " bytes\n";
    std::cout << sizeof(ranks) << " bytes\n";

    std::cout << sizeof(ranks) / sizeof(char) << " Elements\n"; // calculate the size of arrays and find an elements
    std::cout << sizeof(students) / sizeof(std::string) << " Elements\n";

    return 0;
}