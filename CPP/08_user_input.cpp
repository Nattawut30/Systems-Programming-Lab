#include <iostream>

int main()
{

    // cout << (insertion operator)
    // cin >> (extraction operator)

    // If you using VScode,
    // Settings -> find "code runner" -> Tick correct on "Run on terminal"

    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, name); // a long string including white space
    // ws = white space, fix the buffer

    std::cout << "Hello, " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}