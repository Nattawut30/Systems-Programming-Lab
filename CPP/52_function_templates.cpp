#include <iostream>
template <typename T, typename U> // accept different 2 data types in the arguments

auto max(T x, U y) // accept all different data types 'T' or 'U'
{
    return (x > y) ? x : y;
}
// auto: a keyword the compiler will deduce what the return type should be

int main()
{
    // function template = describes what a function looks like.
    // Can be used to generate as many overloaded functions
    // As needed, each using different data types

    // Ex. "It's like a cookie-cutter..."
    // "Cookies are the same shape, but the dough used can be different"
    // More dynamic!

    std::cout << max(1, 2.5) << '\n';

    return 0;
}