#include <stdio.h>

int main(){
    // 2D array = An array where each element is an array
    // array[][] = {{}, {}, {}};

    // matrix or grid of data
    int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9},
                        {10, 11, 12}};

                        // like a chess or excel row/column
    printf("%d ", numbers[0][0]); // [] first is rows - , [] second is column |
    printf("%d ", numbers[0][1]);
    printf("%d ", numbers[0][2]);

    printf("\n");

    printf("%d ", numbers[1][0]);
    printf("%d ", numbers[1][1]);
    printf("%d ", numbers[1][2]);

    printf("\n");

    printf("%d ", numbers[2][0]);
    printf("%d ", numbers[2][1]);
    printf("%d ", numbers[2][2]);

    printf("\n");
    printf("*** Let's try it in the nested loops! **\n");

    // use nested loops is better and clearner
    for(int i = 0; i < 4; i++){ // rows
         for(int j = 0; j < 3; j++){ // columns
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    // Practice: create a phone number pad

    char numpad[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'},
                        {'*', '0', '#'}};

    printf("*** Phone numpad *** \n");

    for(int a = 0; a < 4; a++){
        for(int b = 0; b < 3; b++){
            printf("%c ", numpad[a][b]);
        }
        printf("\n");
    }

    return 0;
}