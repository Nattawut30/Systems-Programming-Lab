#include <iostream>

// The program read from the top to down

void happyBirthday(std::string name, int age); // pass and match the parameter

// our house = we can't see what inside our house
int main()
{
    // function = a block of reusable code

    std::string name = "Fluke";
    int age = 26;

    happyBirthday(name, age); // invoke and call that function

    return 0;
}

// our neightbor house = they can't see what inside our house
void happyBirthday(std::string name, int age) // pass and match the parameter
{
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday dear " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "You are " << age << " years old!" << std::endl;
}