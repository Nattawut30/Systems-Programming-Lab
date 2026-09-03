#include <stdio.h>

typedef int Number;      // set a nickname
typedef char String[50]; // you can use a pointer, to save space and bytes.
typedef char Initials[3];

int main()
{

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    // Helps simplify complex types and improves code readability

    // typedef existing_type new_name;

    // rename the data type
    Number x = 3;
    Number y = 4;
    Number z = x + y;
    printf("%d\n", z);

    String name = "Nattawut Boonnoon";
    printf("%s\n", name);

    Initials user1 = "NB";
    Initials user2 = "GA";
    Initials user3 = "CL";
    Initials user4 = "LK";
    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}