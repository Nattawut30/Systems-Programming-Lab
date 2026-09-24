#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled; // you can set the default values here
};

int main()
{
    // struct = A structure that group related variables under one name
    // structs can contain many different data types (string, int, double, boolean, etc.)
    // variables in a struct are known as "members"
    // members can be access with . "Class Member Access Operation"

    student student1;
    student1.name = "Fluke";
    student1.gpa = 3.46;
    student1.enrolled = false;

    student student2;
    student2.name = "Madison";
    student2.gpa = 2.46;
    student2.enrolled = true;

    student student3;
    student3.name = "Jill";
    student3.gpa = 2.92;
    student3.enrolled = true;

    std::cout << student1.name << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << student1.enrolled << std::endl;

    std::cout << student2.name << std::endl;
    std::cout << student2.gpa << std::endl;
    std::cout << student2.enrolled << std::endl;

    std::cout << student3.name << std::endl;
    std::cout << student3.gpa << std::endl;
    std::cout << student3.enrolled << std::endl;

    return 0;
}