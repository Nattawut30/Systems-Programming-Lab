#include <iostream>

// Parents class 1
class Animal
{
public:
    bool alive = true;
    void eat()
    {
        std::cout << "NOM NOM NOM\n";
    }
};

// Patents class 2
class Shape
{
public:
    double area;
    double volume;
};

// Child class 1
class Dog : public Animal // inherit from Animal
{
public:
    void bark()
    {
        std::cout << "The dog goes woof!\n";
    }
};

// Child class 1
class Cat : public Animal // inherit from Animal
{
public:
    void meow()
    {
        std::cout << "The cat goes meow!\n";
    }
};

// Child class 2
class Cube : public Shape
{
public:
    double side;
    Cube(double side)
    {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

// Child class 2
class Sphere : public Shape
{
public:
    double radius;
    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main()
{

    // Inheritance = A class can recieved attributes and methods from another class.
    // Children classes inherit from a Parent class. Children inherit DNA and genetics from parents.
    // Helps to reuse similar code found within multiple classes.

    Dog dog;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    Cat cat;
    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();

    Cube cube(10);

    std::cout << "Area: " << cube.area << "cm\n";
    std::cout << "Volume: " << cube.volume << "cm\n";

    Sphere sphere(5);

    std::cout << "Area: " << sphere.area << "cm\n";
    std::cout << "Volume: " << sphere.volume << "cm\n";

    return 0;
}