#include <iostream>
#include <string>

int main()
{
    // pointers = variable that stores a memory address of another variable
    // sometimes it's easier to work with an address

    // & adress-of operator
    // * dereference operator

    std::string name = "Nattawut";
    std::string *pName = &name; // set the pointer *p

    int age = 26;
    int *pAge = &age;

    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pFreePizzas = freePizzas;

    std::cout << pName << std::endl;  // contain memory and the values
    std::cout << *pName << std::endl; // Access the values

    std::cout << pAge << std::endl;
    std::cout << *pAge << std::endl;

    std::cout << pFreePizzas << std::endl;  // where the memory located
    std::cout << *pFreePizzas << std::endl; // access the values, array index 0

    return 0;
}