#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main(){

    // ROCK PAPER SCISSOR

    srand(time(NULL));

    printf("***** ROCK PAPER SCISSORS *****\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice){
        case 1:
            printf("You chose ROCK!\n");
            break;
        case 2:
            printf("You chose PAPER!\n");
            break;
        case 3:
            printf("You chose SCISSOR!\n");
            break;
    }

    switch(computerChoice){
        case 1:
            printf("Computer chose ROCK!\n");
            break;
        case 2:
            printf("Computer chose PAPER!\n");
            break;
        case 3:
            printf("Computer chose SCISSOR!\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}

// Computer Choice
int getComputerChoice(){

    return (rand() % 3) + 1;
}

// User Choice
int getUserChoice(){

    int choice = 0;

    do{
        printf("Choose and option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }while(choice < 1 || choice > 3);

    return choice;

}

// Result for both of em
void checkWinner(int userChoice, int computerChoice){

    if(userChoice == computerChoice){
        printf("It a TIE!");
    }
    else if((userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2)){
        printf("You WIN!");
    }
    else{
        printf("You LOSE!");
    }

}