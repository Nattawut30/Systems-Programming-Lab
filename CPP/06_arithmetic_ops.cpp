#include <iostream>

int main()
{

    // arithmetic operators = return the result of a specific
    // arithmetic operation (+ - * /)

    int students = 20;
    int cats = 10;
    int dogs = 15;
    int birds = 30;
    int remainder = birds % 2;

    int wolf = 6 - 5 + 4 * 3 / 2;

    students += 1; // students++; only add just 1
    cats -= 2;     // cats--; only subtract just 1
    dogs *= 3;
    birds /= 3; // can't hold any decimal portion you need to use double

    std::cout << students << std::endl;
    std::cout << cats << std::endl;
    std::cout << dogs << std::endl;
    std::cout << birds << std::endl;
    std::cout << remainder << std::endl;

    // parenthesis
    // multiplication & division
    // addition & subtraction

    std::cout << wolf << std::endl;

    return 0;
}