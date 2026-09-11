#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    // Namespace = provides a solution for preventing name conflicts.
    // in large projects. Each entity needs a unique name.
    // A namespace allows for identically named entities
    // as long as the namespaces are different.

    using namespace first; // using entity found within that particular namespace
    using std::cout;       // safer alternative to using namespace
    using std::string;

    int x = 0;
    std::cout << x << std::endl;

    std::cout << first::x << std::endl;  // x from first
    std::cout << second::x << std::endl; // x from second

    string name = "Nattawut";            // no need to tells em std::string
    cout << "Hi, " << name << std::endl; // no need to type std::cout again

    return 0;
}