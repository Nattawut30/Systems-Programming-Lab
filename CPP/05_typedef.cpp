#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t; // always underscore + t to identify as type

using message_t = std::string;
using score_t = int; // more popular then typedef nowaday

int main()
{
    // typedef = reserved keyword used to creaate an additional name
    // alias for another data type
    // New identifier for an existing type
    // helps with readability and reduces typos

    // Use when there is a clear benefit
    // Replaced with 'using' (work better w/ templates)

    pairlist_t pairlist;

    text_t FirstName = "Nattawut";
    number_t age = 26;

    message_t greeting = "Hi, there!";
    score_t score = 30;

    std::cout << FirstName << std::endl;
    std::cout << age << std::endl;

    std::cout << greeting << std::endl;
    std::cout << score << std::endl;

    return 0;
}