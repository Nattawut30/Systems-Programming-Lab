#include <stdio.h>

typedef struct
{
    char model[25];
    int year;
    int price;
} Car;

int main()
{
    // array of structs = Array where each element contains a struct {}
    // Helps organize and groups together related data

    Car cars[] = {{"Mustang", 2025, 34000},
                  {"Bugati", 2026, 690000},
                  {"Lamborghini", 2026, 750000}};

    // set the total of elements
    int number = sizeof(cars) / sizeof(cars[0]);

    // use for loop to help represent a whole array
    for (int i = 0; i < number; i++)
    {
        printf("%s - %d, $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}