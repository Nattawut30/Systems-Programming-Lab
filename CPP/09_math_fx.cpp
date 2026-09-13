#include <iostream>
#include <cmath> // add some math function

int main()
{

    double x = 3.14;
    double y = 2.78;

    double z1;
    double z2;
    double z3;
    double z4;
    double z5;

    double j1;
    double j2;

    z1 = std::max(x, y);
    z2 = std::min(x, y);
    z3 = std::pow(2, 3);
    z4 = std::sqrt(49);
    z5 = std::abs(-6);

    j1 = round(x);
    j2 = ceil(x);

    std::cout << z1 << std::endl;
    std::cout << z2 << std::endl;
    std::cout << z3 << std::endl;
    std::cout << z4 << std::endl;
    std::cout << z5 << std::endl;

    std::cout << j1 << std::endl;
    std::cout << j2 << std::endl;

    return 0;
}