#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    
    // while loop = Continune some code WHILE the condition remains true
    // Condition must be true for us to enter while loop
    // Condition: false = not enter the while loop or escape it

    int number = 0;

    char name[50] = "";

    bool isRunning = true;
    char response = '\0';

    // Number
    while(number <= 0){
        printf("Enter a number greater than 0: \n");
        scanf("%d", &number);
    }

    // Name
    while(strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name: \n");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello, %s\n", name);

    // Bool
    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continune? (Y or N): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }
    printf("You exit the game");

    return 0;
}