#include <iostream>

class Stove
{
private: // i dont wanna anyone to change this so i locked it as private not piblic
    int temperature = 0;

public:
    Stove(int temperature)
    {
        setTemperature(temperature);
    }
    int getTemperature() // getters
    {
        return temperature;
    }
    void setTemperature(int temperature) // setters
    {
        if (temperature < 0)
        {
            this->temperature = temperature;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    Stove stove(0);

    // stove.setTemperature(5);

    std::cout << "The temperature setting is: " << stove.getTemperature(); // invoke this

    return 0;
}