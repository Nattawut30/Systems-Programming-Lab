#include <stdio.h>
#include <stdbool.h> // work with boolean
#include <string.h> // work with string

int main() {
    // If statement(s) = Do some code if a condition is true.
    // If the condition is false, don't do it

    int age = 0;

    bool isStudent = false;

    char name[50] = "";

    printf("Enter Your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    // int
    if(age >= 65){ // if true do this
        printf("You are a senior.\n");
    }
    else if(age >= 18){
        printf("You are an adult\n");
    }
    else if(age == 0){ // direct comparison use 2 equals
        printf("You are a newborn\n");
    }
    else if(age < 0){ // another conditions
        printf("You haven't been born yet\n");
    }
    else{ // if false do something else
        printf("You are a child.\n");
    }

    // boolean
    if(isStudent == true){
        printf("You are a student.\n");
    }
    else{
        printf("You are NOT a student.\n");
    }

    // string
    if(strlen(name) == 0){
        printf("You did not enter your name!\n");
    }
    else{
        printf("Hello, %s!", name);
    }

    return 0;
}
