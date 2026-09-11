// Code Runner + C/C++ Extension Pack
// why you need to learn C++?
// - Middle level language likes C
// - FAST
// - Advanced grapphic apps
// - Embeded System
// - Video game and HFT: High-Frequency-Trading in finance

// Open terminal
// clang --version
// xcode-select --install

#include <iostream> // header file access to input and output operation

int main()
{
    // This is a comment

    /*
    This
    is
    also
    a
    comment
    just
    multi-line
    */

    std::cout << "My name is Nattawut!" << std::endl;        // Standard C Output
    std::cout << "This is my first program in C++!" << '\n'; // endl = end of the line

    // endl & '\n' looks the same but... the 'endl' will flush the output buffer.
    return 0; // 0 = no problems with the program.
}