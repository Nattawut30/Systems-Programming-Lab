#include <iostream>

int main()
{
    // array = a data structure that can hold multiple values
    // values are accessed by an index number
    // "kind of like a variable that holds multiple values"

    std::string cars[] = {"Bugati", "Mustang", "Izuzu"}; // array can only contain values of the same data type!

    double prices[4] = {5.00, 7.50, 9.99, 14.99};

    // you can declare an array and then assign values later. Set the size -> assign the values

    cars[0] = "Camero"; // replace the values

    std::cout << cars[0] << '\n'; // access by the index number
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    std::cout << prices[0] << std::endl;
    std::cout << prices[1] << std::endl;
    std::cout << prices[2] << std::endl;
    std::cout << prices[3] << std::endl;

    return 0;
}