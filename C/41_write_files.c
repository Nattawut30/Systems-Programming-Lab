#include <stdio.h>

int main()
{
    // Write a file

    FILE *pFile = fopen("output.txt", "w"); // w = write, r = read
    // You can paste the file path on where you want
    // if not, it's gonna be on the same folder of this file
    // FILE *pFile = fopen("/Users/nattawut/Downloads/output.txt", "w");

    // this function finna return a value of NULL
    // NULL is a pointer nothing (address 0)

    char text[] = "I LOVE BADDIE!\nI NEED A BADDIE!";

    // check if our pointer does not = NULL
    if (pFile == NULL)
    {
        printf("Error opening file!\n");
        return 1; // if we return something that's not 0, there was an error.
    }

    // File printf
    fprintf(pFile, "%s", text);
    printf("File was written successfully!\n");

    fclose(pFile);

    return 0;
}