#include <iostream>

class Student
{
public:
    std::string name;
    int age;
    double gpa;

    Student(std::string x, int y, double z)
    {
        name = x;
        age = y;
        gpa = z;
    }
};

class Car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    Car(std::string make, std::string model, int year, std::string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main()
{

    // constructor = Special method that is automatically called when an object is instantiated
    // useful for assgined values to attributes as arguments

    Student student1("Fluke", 26, 3.46);
    Student student2("Grace", 24, 3.79);
    Student student3("Megan", 22, 4.00);

    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;

    std::cout << student2.name << std::endl;
    std::cout << student2.age << std::endl;
    std::cout << student2.gpa << std::endl;

    std::cout << student3.name << std::endl;
    std::cout << student3.age << std::endl;
    std::cout << student3.gpa << std::endl;

    Car car1("Chevy", "Corvetter", 2026, "Blue");

    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;
    std::cout << car1.color << std::endl;

    return 0;
}