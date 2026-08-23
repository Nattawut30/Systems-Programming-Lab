#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; // never change value of Pi. all big caps.

    printf("Enter the radius: ");
    scanf("%lf", &radius); // we need long float

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area: %.2lf cm\n", area);
    printf("Surface Area: %.2lf cm\n", surfaceArea);
    printf("Volume: %.2lf cm\n", volume);

    return 0;
}