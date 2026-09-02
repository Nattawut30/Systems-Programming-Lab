#include <stdio.h>
#include <string.h>

int main(){

    // Array of strings

    // each string as a row
    // each character as a column
    char fruits[][10] = {"Apple", "Banana", "Coconut", "Pineapple", "Lemon"};
    int size = sizeof(fruits) / sizeof(fruits[0]); // auto updated array

    // conceptually the element in it is separate in the memory: A-P-P-L-E

    // replace [] rows, [] columns
    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    fruits[1][0] = 'a';
    fruits[1][5] = 'A';

    fruits[2][0] = 't';
    fruits[2][5] = 'C';

    for(int i = 0; i < size; i++){
        printf("%s\n", fruits[i]);
    }

    printf("\n");

    // EXCERCISE: what's your name?

    char names[4][25] = {0}; // {0} = no garbage to the previous program
    int rows = sizeof(names) / sizeof(names[0]);

    for(int x = 0; x < rows; x++){
        printf("Enter a name: ");
        fgets(names[x], sizeof(names[x]), stdin);
        names[x][strlen(names[x]) - 1] = '\0';
    }

    for(int y = 0; y < rows; y++){
        printf("%s\n", names[y]);
    }

    return 0;
}