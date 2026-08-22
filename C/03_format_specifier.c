#include <stdio.h>

int main() {

    // format specifier = Special tokens that begin with a % symbol,
    // followed by a character that specifies the data type
    // and optional modifiers (width, precision, flags).
    // they control how data is displayed or interpreted.

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Fluke";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // 01: width

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    // The number we set the width including the spaces.
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

    // Left justify these values all the space after
    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);

    // add some 0
    printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n", num3);

    // add some positive
    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);

    // 02: Precision
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    // The number will be rounded 19.99 -> 20.00
    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}