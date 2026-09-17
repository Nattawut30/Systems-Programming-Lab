#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

// main
int main()
{
    // Function can share the same name but you need a different set of parameters

    bakePizza("Pepperoni", "Hawaiian");
    return 0;
}

void bakePizza()
{
    std::cout << "Here is your pizza!" << std::endl;
}

void bakePizza(std::string topping1) // same name but needs a different set of parameters
{
    std::cout << "Here is your " << topping1 << " pizza!" << std::endl;
}
// treat it as "function signature" and need to be unique
void bakePizza(std::string topping1, std::string topping2) // same name but needs a different set of parameters
{
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!" << std::endl;
}