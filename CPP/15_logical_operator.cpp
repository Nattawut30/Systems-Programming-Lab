#include <iostream>

int main()
{
    // && = check if two conditions are 'true'
    // || = check if at least one of two conditions is 'true'
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;

    // EX.1
    if (temp <= 0 || temp >= 30)
    {
        std::cout << "The temperature is Bad!" << std::endl;
    }
    else
    {
        std::cout << "The temperature is Good!" << std::endl;
    }

    // EX.2
    if (sunny)
    {
        std::cout << "It is sunny outside!" << std::endl;
    }
    else
    {
        std::cout << "It is cloudy outside!" << std::endl;
    }

    return 0;
}