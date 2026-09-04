#include <stdio.h>

void birthday(int *age);

int main()
{

    // pointer = A variable that stores the memory address of another variable.
    // Benefit: They help avoid wasting memory by allowing you to pass
    // the address of a large data structure instead of copying the entire data.

    int age = 26;
    int *pAge = &age; // * means dereference operator and & address

    // %p is used to print a pointer adress

    printf("%p\n", &age); // a hexodimal adress. store this address as a value in another variable
    printf("%p\n", pAge);

    // pass the pointer to the function
    birthday(pAge);
    printf("You are %d years old!", age);

    return 0;
}
// pointer = an address to another variable or data strucuture

void birthday(int *age) // accept pointer, dereferenec gonna return the value
{
    // pass by reference not value
    (*age)++; // return the value here on the *
    // Why we need a parenthesis? there's operator precedence in C!
    // Dereference this variable first and then increment it
}