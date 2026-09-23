#include <iostream>

void walk(int steps);
int factorial_iterative(int num);
int factorial_recursive(int num2);

int main()
{

    // recursion = A programming technique where a function
    // invokes itself from within
    // break a complex concept into a repeatable single step

    // (iterative v recursive)

    // advantages = less code and is cleaner
    // useful for sorting and searching algorithms

    // disadvantages = uses more memory
    // slower

    walk(100);

    std::cout << factorial_iterative(10) << '\n';
    std::cout << factorial_iterative(12) << '\n';

    return 0;
}

void walk(int steps)
{
    if (steps > 0) // simple but use more memory and takes more processing time
    {
        std::cout << "You take a step!\n";
        walk(steps - 1); // recursive approach here
    }
}

int factorial_iterative(int num) // iterative
{
    int result = 1;
    for (int i = i; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}

int factorial_recursive(int num2) // recursive
{
    if (num2 > 1)
    {
        return num2 * factorial_recursive(num2 - 1);
    }
    else
    {
        return 1;
    }
}

// Stack overflow = When a program attempts to use more space than is available on the call stack
// Typically, resulting in a program crash.