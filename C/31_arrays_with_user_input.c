#include <stdio.h>

int main(){

    int points[] = {100, 90, 80, 70, 60}; // normally we do this

    int scores[5] = {0}; // set the value, unspecified element also set to zero as well

    // ** C Does not automatically clear memory from programs that used that memory previously! **

    // loop for input
    for(int i = 0; i < 5; i++){
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

    // loop for result
    for(int i = 0; i < 5; i++){
        printf("%d ", scores[i]);
    }

    return 0;
}