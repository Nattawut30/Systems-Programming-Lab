#include <stdio.h>

int main (){

    // a loop is inside another loop again.

    for(int i = 1; i < 4; i++){
        for(int j = 1; j < 10; j++){
        printf("%d ", j); // use different variables
        }
        printf("\n");
        
    }

    printf("\n"); // to print new line character

    // display multiple tables!
    for(int x = 1; x <= 10; x++){
        for(int y = 1; y <= 10; y++){
            printf("%3d ", x * y);
        }
        printf("\n");
    }
    printf("\n");

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &rows);

    printf("Enter the # of colomns: ");
    scanf("%d", &columns);

    printf("Enter the a symbol to use: ");
    scanf(" %c", &symbol); // one blank space is to avoid buffer

    for(int b = 0; b < rows; b++){ // outer loop
      for(int a = 0; a < columns; a++){ // inner loop
        printf("%c", symbol);
        }  
        printf("\n");
    }

    return 0;
}