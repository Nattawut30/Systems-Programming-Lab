#include <iostream>

int main()
{

    double temperature;
    char unit;

    std::cout << "********** Temperature Conversion **********\n";

    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temperature;

        temperature = (1.8 * temperature) + 32.0;
        std::cout << "Temperature is: " << temperature << "F" << std::endl;
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temperature;

        temperature = (temperature - 32) / 1.8;
        std::cout << "Temperature is: " << temperature << "C" << std::endl;
    }
    else
    {
        std::cout << "Please enter in only C or F" << std::endl;
    }

    std::cout << "********************************";

    return 0;
}