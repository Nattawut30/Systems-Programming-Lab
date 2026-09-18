#include <iostream>

int myNum = 3; // global

void printNum(int myNum);

int main()
{
    // Local variables = Declared inside a function or block {}
    // Global variables = Declared outside of all functions

    int myNum = 1;                              // local
    std::cout << "main:" << myNum << std::endl; // local
    // std::cout << ::myNum << '\n'; // global

    // function can't see inside another function
    printNum(myNum);

    // try to avoid global variables as much as i can
    // it pollutes the global namespace
    // variables declared within a function are much more secure!

    // a function will use any local variables first before resorting any global function

    return 0;
}

void printNum(int myNum)
{
    int muNum = 2;                             // local
    std::cout << "printNum:" << myNum << '\n'; // local
    // std::cout << ::muNum << '\n'; // globla
}