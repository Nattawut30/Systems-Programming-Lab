#include <iostream>

int main()
{
    // Memory Address = A location in memory where data is stored.
    // A memory address can accessed with & (adress-of operator)

    std::string name = "Nattawut";
    int age = 26;
    bool student = true;

    std::cout << &name << std::endl;    // address in my computer's memory
    std::cout << &age << std::endl;     // imagine it as house numbers
    std::cout << &student << std::endl; // integers takes up 4 bytes, Booleans take up 1 byte,

    return 0;
}