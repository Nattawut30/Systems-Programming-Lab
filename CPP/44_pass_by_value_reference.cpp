#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);
    // when we pass a variable to a function, we're passing by value.
    // when revoking the function we're creating copies of the original values
    // basically, we have now are 2 copies of the variable x and y

    // pass by reference is address in my computer's memory
    // I should use pass by reference as often as possible!
    // unless I have a reason to pass by value

    std::cout << "X: " << x << std::endl; // water
    std::cout << "Y: " << y << std::endl; // Kool-Aid

    // what if we can create a function to work with this?

    return 0;
}
// pass by reference
void swap(std::string &x, std::string &y) // add '&' to refer to the memory address
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}