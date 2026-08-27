#include <stdio.h>
#include <string.h>

// called the function with no return type
void happyBirthday(char name[], int age){ // set up parameter to receive arguments
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s!", name);
    printf("\nHappy Birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

int main(){
    // function = A reusable section of code that can be invoked "Called"
    // Arguments can be sent to a function so that it can use them.
    // we don't repeat ourselves.

    char name[50] = ""; // empty string to input
    int age = 0; // integers = 0 for input

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin); // input
    name[strlen(name) - 1] = '\0'; // buffers fixed

    printf("Enter your age: \n");
    scanf("%d", &age);

    // function can't see inside of other functions
    // pass the arguments and matching set of parameters

    happyBirthday(name, age); // called your function
    
    return 0;
}