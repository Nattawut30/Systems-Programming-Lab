#include <iostream>

int main()
{
    // dynamic memory = Memory that is allocated after the program
    // is already compiled and runnnig.
    // Use the 'new' operator to allocate
    // memory in the heap rather than the stack

    // Useful when we don't know how much memory
    // we will need. Makes our programs more flexible,
    // Especially when accepting use input.

    // Ex.1
    int *pNum = NULL;

    pNum = new int; // return an address we're stroing that address within pnum

    *pNum = 26;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum; // free up the memory, no memory leak

    // Ex.2
    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[5];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades; // free up the array memory

    return 0;
}