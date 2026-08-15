#include <stdio.h>
#include <stdbool.h> // Add this for using booleans!

int main(){
    // variable = A reuseable container for a value.
    //            Behave as if it were the value if contains

    /*
    int = Whole numbers (4 bytes in modern system)
    float = single-precision decimal number (4 bytes)
    double = double-precision decimal number (8 bytes)
    char = single character (1 byte)
    char[] = array of characters or string (size varies)
    bool = True or False (1 byte, requires <stdbool.h>)
    */

    int age = 26; // integers = whole numbers
    int year = 2026;
    int quantity = 1;

    float gpa = 3.46; // floating point number = a number that contains a decimal
    float price = 19.99;
    float temperature = -10.1;

    double pi = 3.14159265358979; // double you can store 15 to 16 digits
    double e = 2.7182818284590; // euler's number

    char grade = 'A'; // char = characters, use single 'quote' btw
    char symbol = '!';
    char currency = '$';

    char name[] = "Nattawut Boonnoon"; // string is a series of characters. use an array of char to represent a string
    char food[] = "Pizza";
    char email[] = "myemail123@email.com";

    bool isOnline = true; // booleans = True/False (Include the header file!: #include <stdbool.h>)
    bool isStudent = false;
    bool forSale = false;

    printf("You are %d years old\n", age); // % = format specified, d = decimal
    printf("The year is %d\n", year); // \n = new line
    printf("You have ordered %d x items\n", quantity);

    printf("Your GPA is %f\n", gpa); // f = float number
    printf("Your GPA is %.1f\n", gpa); // .1f is to display the given amount of digits.
    printf("The price is $%.2f\n", price);
    printf("The temperature is %.1f C\n", temperature);

    printf("The value of pi is %.15lf\n", pi); // lf = long floating point number
    printf("The value of e is %.15lf\n", e);

    printf("Your grade is %c\n", grade); // c = char = characters
    printf("Your favorite symbol is %c\n", symbol);
    printf("The american dollars is %c\n", currency);

    printf("Hello, %s\n", name);  // s = string
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);

    printf("%d\n", isOnline); // 1 = True, 0 = False

    if(isOnline){
        printf("You are ONLINE!\n");
    }
    else{
        printf("You are OFFLINE!\n");
    }

    //

    if(isStudent){
        printf("You are a student!\n");
    }
    else{
        printf("You are NOT a student!\n");
    }

    //

    if(isStudent){
        printf("That item is for sale!\n");
    }
    else{
        printf("That item is NOT for sale!\n");
    }
    return 0;
}