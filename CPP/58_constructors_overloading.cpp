#include <iostream>

class Pizza
{
public:
    std::string topping1;
    std::string topping2;

    Pizza() // for pizza3
    {
    }

    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{
    // overloading constructors = Multiple constructors w/ same name but different parameters
    // Allows for varying arguments when instantiating an object.

    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushroom", "Peppers");
    Pizza pizza3; // no need () on it

    std::cout << pizza1.topping1 << std::endl;
    std::cout << pizza2.topping2 << std::endl;

    return 0;
}