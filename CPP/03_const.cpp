#include <iostream>

int main()
{
    // The 'const' keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.1415926; // you don't want to change this value
    double radius = 10;
    double circumference = 2 * PI * radius; // const = all letter upper-case

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 2560;
    const int HEIGHT = 1440;

    std::cout << circumference << "cm.";

    return 0;
}