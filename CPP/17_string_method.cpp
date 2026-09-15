#include <iostream>

int main()
{

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12) // length of the string
    {
        std::cout << "Your name can't be over 12 characters!" << std::endl;
    }
    else if (name.empty())
    {
        std::cout << "You didn't enter your name!" << std::endl;
    }
    else
    {
        std::cout << "Welcome " << name << std::endl;
    }

    // other useful string method:
    // .clear() = clear the output
    // .append("@gmail.com") = add the tail to the string
    // .at(0) = retunr the index of the string
    // .insert(index, "@") = will add element of string to the index position
    // .find(' ') = find how many space in the name
    // .erase(beginning-index, ending-index) = eliminate the string out based on index

    return 0;
}