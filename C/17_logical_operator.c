#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operator = Used to combine or modify boolean expression.

    // && = AND = Both must be true
    // || = OR = some must be true
    // ! = NOT = 

    int temp = 20;
    bool isSunny = true;

    if(temp <= 0 || temp >= 30){ // some conditions must be true
        printf("The temperature is BAD!\n");
    }
    else{
        printf("The temperature is GOOD!\n");
    }

    if(!isSunny){
        printf("Is is CLOUDY outside!\n");
    }
    else{
        printf("It is SUNNY outside!\n");
    }

    return 0;
}