#include <iostream>
#include <string>

// int can pass by value because it too tiny size.
void printInfo(const std::string &name, int age);

int main()
{
    // const parameter = Parameter that is effectively read-only
    // Code is more secure & conveys intent
    // Useful for references and pointers.

    // Why would I pass it by reference if I dont wanan change the original value ofthe variable?
    // Becaise if I pass by value useless copies get made that fill up memory!
    // Pass by reference to read from the original data without copying everytime I call that function

    std::string name = "Nattawut";
    int age = 26;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string &name, int age)
{

    std::cout << name << std::endl;
    std::cout << age << std::endl;
}