#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    // When I pass an array to a function,
    // I only have to pass the array name.
    // I don't need a set of squre breakets when i do so.

    // However, when a function receives an array it decays into the pointers.
    // The function no longer what the size of the array is

    // We could pass that as an additional argument to let the function know what the size is
    // which we could use iterate over the array.

    double prices[] = {49.99, 15.55, 75.25, 19.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}