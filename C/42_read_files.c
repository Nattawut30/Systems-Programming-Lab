#include <stdio.h>

int main()
{
    // READ A FILE

    FILE *pFile = fopen("input.txt", "r"); // r = read
    // again you can pasted the file path
    // If It can't open, it will return "NULL"

    // bytes
    // temporarily store data like a waiting room
    // like a reading a book word-by-word, then going aross the room to write it down word-by-word
    // buffer helps reading a whole paragraph from a book, then going across the room to write that paragragph down
    // don't set it too big, it wasted memory!
    char buffer[1024] = {0};

    // we need to check
    if (pFile == NULL)
    {
        printf("Could not open file\n");
        return 1; // return true if there is error.
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pFile); // don't leave any resources open when you program is finished!

    return 0;
}