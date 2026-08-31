#include <stdio.h>
#include <stdlib.h> // stadnard library
#include <time.h> // time

int main(){

    // Pseudo-random = Appear random but are determined by a
    // mathematical formula that uses a seed value
    // to generate a predictable sequence of numbers.
    // advanced: Mersenne Twister or /dev/random


    // create a seed value to set a set of time

    srand(time(NULL)); // NULL = no value

    printf("%d\n", rand());
    printf("%d\n", RAND_MAX); // check the highest

    int min = 50;
    int max = 100;

    // a formula to create a random number
    int randomNum1 = (rand() % (max - min + 1)) + min; 
    int randomNum2 = (rand() % (max - min + 1)) + min; 
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d", randomNum1, randomNum2, randomNum3);
    
    return 0;
}