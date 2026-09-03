#include <stdio.h>
#include <stdbool.h>

int main()
{

    // ternary operator ? = shorthand for if-else statements
    // (condition) ? value_if_true : value_if_false;

    int x = 5;
    int y = 6;
    int max = (x > y) ? x : y; // if this true return some value
    printf("%d\n", max);

    bool isOnline = true;
    printf("%s\n", (isOnline) ? "Online" : "Offline");

    int number = 8;
    printf("%d is %s\n", number, (number % 2 == 0) ? "Even" : "Odd");

    int age = 26;
    printf("%s\n", (age > 18) ? "Adult" : "Child");

    // You can use the pointer, %s will display chars untill it reaches '\0' (null terminator)
    int hours = 21;
    int minutes = 07;
    char *meridiem = (hours < 12) ? "AM" : "PM";        // * means pointer
    printf("%02d:%02d %s\n", hours, minutes, meridiem); // point it here

    return 0;
}