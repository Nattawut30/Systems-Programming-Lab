#include <iostream>

double square(double length); // return the values, match the keyword of data type of what we returning.
double cube(double length);   // list the data type of what you are returning
std::string concatStrings(std::string string1, std::string string2);

// main
int main()
{

    // return = return a value back to the spot
    // where you called the encompassing function

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::string firstName = "Nattawut";
    std::string lastName = "Boonnoon";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Area: " << area << "cm^2" << std::endl;
    std::cout << "Volume: " << volume << "cm^3" << std::endl;
    std::cout << "Hello, " << fullName << std::endl;

    return 0;
}

// tail f(x)
double square(double length)
{ // return the values, match the keyword of data type of what we returning.
    return length * length;
}

double cube(double length)
{ // return the values, match the keyword of data type of what we returning.
    return length * length * length;
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2; // match the data type of the value being returned
}