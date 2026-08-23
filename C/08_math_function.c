#include <stdio.h>
#include <math.h> // working with math need header file!
#include <stdlib.h> // for 'absolute'

int main() {

    // math functions

    int x = 9;
    int y = 2;
    float pi = 3.14;
    float pi2 = 3.14159;
    float price = 10.99;
    int a = -3;
    float b = 3;
    float k = 45;
    float h = 60;
    float j = 180;

    x = sqrt(x);
    y = pow(y, 2);
    pi = round(pi);
    pi2 = ceil(pi2); // round up
    price = floor(price); // round down
    a = abs(a); // absolute function <stdlib.h>
    b = log(b);
    k = sin(k);
    h = cos(h);
    j = tan(j);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%.2f\n", pi);
    printf("%.2f\n", pi2);
    printf("%.2f\n", price);
    printf("%d\n", a);
    printf("%.2f\n", b);
    printf("%.2f\n", k);
    printf("%.2f\n", h);
    printf("%.2f\n", j);

    return 0;
}