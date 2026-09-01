#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    // BANKING PROGRAM

    int choice = 0;
    float balance = 0.0f;

    printf("***** WELCOME TO THE BANK! *****\n");

    do{
        printf("\n *** Select an option: ***\n");
        printf("\n1. Check Balance\n");
        printf("\n2. Deposit Money\n");
        printf("\n3. Withdraw Money\n");
        printf("\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using the bank!\n");
                break;
            default:
                printf("\nInvalid choice! Please select 1 - 4\n");

        }

    }while(choice != 4);

    return 0;

}

// check balance
void checkBalance(float balance){
    printf("\nYou current balance is: $%.2f\n", balance);
}

// deposit
float deposit(){
    float amount = 0.0f;

    printf("\nEnter amount to deposit: $\n");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else{
        printf("Sucessfullyy deposited $%.2f\n", amount);
        return amount;
    }
}

// withdraw
float withdraw(float balance){

    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $\n");
    scanf("%f", &amount);

    if(amount < 0){
        printf("\nInvalid amount!\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("\nInsufficient funds! Your balance is $%.2f\n", balance);
        return 0.0f;
    }
    else{
        printf("\nSuccessfully withdrew $%.2f\n", amount);
        return amount;
    }
}