#include <iostream>

int main()
{

    // Null value = a special value that means something has no value.
    // when a pointer is holding a null value,
    // that pointer is NOT pointing at anything (null-pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptr(s) are helpful when determining if an address
    // was successfully assigned to a pointer

    // When using pointers, be careful that your code isn't
    // dereferencing null or pointing to free memory
    // this will cause undefined behavior (Don't try this at home, kid!)

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {                                               // a good way to check if it's failed or not when working with dynamic memory
        std::cout << "address was NOT assigned!\n"; // if it's no pointer = nullptr = undefined bahavior
    }
    else
    {
        std::cout << "Address was assigned!\n"; // there's a pointer
        std::cout << *pointer;                  // access the values
    }

    return 0;
}