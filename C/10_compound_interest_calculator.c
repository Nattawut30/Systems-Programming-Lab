#include <stdio.h>
#include <math.h>

int main() {
    // Compound Interest Calculator

    double principle = 0.0; // your investing initially or initially deposit
    double rate = 0.0; // interest rate
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principle (P): ");
    scanf("%lf", &principle);

    printf("Enter the interest rate in percent (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter Number of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    // A = P(1 + r / n)^n*t
    total = principle * pow(1 + rate / timesCompounded, timesCompounded * years);

    printf("After %d years, the total will be $%.2lf", years, total);

    return 0;

}