#include <stdio.h>

int main() {
    // Arithmetic operators = + - * / % ++ --

    int x = 2;
    float y = 3;
    float z = 0;
    float j = 10;
    int l = 20;
    int k = 30;
    int o = 99;
    int f = 69;
    int p = 45;
    float h = 42;
    float v = 60;

    z = x + y;
    y = z - x;
    x = z * y;
    l = x / j;
    k = l % x;

    // augmented assignment operators
    j++;
    o--;
    f+=3;
    p-=4;
    h*=2;
    v/=6;

    printf("%d\n", x);
    printf("%f\n", y);
    printf("%f\n", z);
    printf("%d\n", l);
    printf("%d\n", k);
    printf("%f\n", j);
    printf("%d\n", o);
    printf("%d\n", f);
    printf("%d\n", p);
    printf("%f\n", h);
    printf("%f\n", v);

    return 0;
}