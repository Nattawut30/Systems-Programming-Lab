#include <iostream>
#include <string>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main()
{
    // structs = pass by values
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2026;
    car1.color = "Silver";

    car2.model = "Bugati";
    car2.year = 2026;
    car2.color = "Orange";

    paintCar(car1, "Navy");
    paintCar(car2, "Gold");

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car)
{
    std::cout << &car << std::endl;

    std::cout << car.model << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.color << std::endl;
}

void paintCar(Car &car, std::string color) // use address of operator
{
    car.color = color;
}