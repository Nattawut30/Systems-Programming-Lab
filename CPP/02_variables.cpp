#include <iostream>

int main()
{
    // variables = representation of some number or values
    int x; // declaration
    x = 5; // assignment

    int y = 6;
    int sum = x + y;

    // integer (whole number)
    int age = 26;
    int year = 2026;
    int days = 7;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 3.46;
    double temperature = 32.8;

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (true or false, 1 or 0, light switch on-off)
    bool isStudent = true;
    bool power = false;
    bool forSale = true;

    // string (object that represents a sequence of text)
    std::string name = "Nattawut";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;

    std::cout << year << std::endl;
    std::cout << gpa << std::endl;
    std::cout << currency << std::endl;
    std::cout << isStudent << std::endl;

    std::cout << "Hello, " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    // beware of space

    return 0;
}