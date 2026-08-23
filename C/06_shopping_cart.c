#include <stdio.h>
#include <string.h> // function related to the string

int main() {
    // shoping cart program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item whould you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; // format buffer check header!

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s/s\n", quantity, item);
    printf("The Total Price is: %c%.2f", currency, total); // format specifier both total price and currency


    return 0;
}