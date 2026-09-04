#include <stdio.h>
#include <stdlib.h>

int main()
{
    // malloc() = A function in C that dynamically allocates
    // a specified number of bytes in memory

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char)); // how much size and space we gonna reserve
    // imagine you are renting an apartment and renting some space that does not belong to us.
    // when we're done using it, we have to return the space back.

    if (grades == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // to prevent segmentation fault!
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    // you can treat it as an arrays

    for (int i = 0; i < number; i++)
    {
        printf("%c ", grades[i]);
    }

    // important: DO NOT FORGET THIS!
    free(grades);  // returning "rented" space back to the OS
    grades = NULL; // * like a key to apartment, yes return it too. Avoid dangling pointers

    return 0;
}