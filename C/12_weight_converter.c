#include <stdio.h>

int main(){
    // weight converter program

    int choice = 0;
    float pounds = 0.0;
    float kilograms = 0.0;

    printf("Weight Conversion Calculator!\n");
    printf("1. Kilograms -> Pounds\n");
    printf("2. Pounds -> Kilograms\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        // Kilograms to pounds
        printf("Enter the weight in Kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if(choice == 2){
        // Pounds to Kilograms
        printf("Enter the weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    else{
        printf("Invalid Choice! Please enter 1 or 2.\n");
    }

    return 0;
}