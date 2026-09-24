#include <iostream>

// class 1
class Human
{
public:
    std::string name;
    std::string occupation;
    int age;

    void eat()
    {
        std::cout << "This person is eating\n";
    }
    void drink()
    {
        std::cout << "This person is drinking\n";
    }
    void sleep()
    {
        std::cout << "This person is sleeping\n";
    }
    void work()
    {
        std::cout << "This person is working\n";
    }
};

// class 2
class Car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    void accelerate()
    {
        std::cout << "You step on the gas!\n";
    }
    void brake()
    {
        std::cout << "You step on the brakes!\n";
    }
};

// main
int main()
{

    // object = A collection of attributes and methods
    // They can have characteristics and could perform actions,
    // Can be used to mimic rel world items (ex. Phone, Book, Dog)
    // Created from a class which acts as a "blue-print"

    Human human1; // access
    Human human2;

    Car car1;

    human1.name = "Tom";
    human1.occupation = "Actor";
    human1.age = 60;

    human2.name = "Brad";
    human2.occupation = "Director";
    human2.age = 65;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2026;
    car1.color = "Silver";

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();
    human1.work();

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();
    human2.work();

    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;
    std::cout << car1.color << std::endl;

    car1.accelerate();
    car1.brake();

    return 0;
}