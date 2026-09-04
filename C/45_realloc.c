#include <stdio.h>
#include <stdlib.h>

int main()
{

    // realloc() = Reallocation
    // Resize previously allocated memory
    // memory allocation is likes dynamic arrays
    // make it bigger or make it smaller
    // realloc(ptr, bytes)

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float)); // reserve memory

    // check allocated memory to prevent segmentation fault.
    if (prices == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Continune count an index
    for (int i = 0; i < number; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    // ***** More dynamic *****
    int newNumber = 0; // what if I wanna add more or remove one? That's where realloc comes in
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float)); // temp = temporarily

    if (temp == NULL)
    {
        printf("Could not reallocated memory!\n");
        // no need to return 1; if you dont wanna lose old memory
    }
    else
    {
        prices = temp;
        temp = NULL;

        // Contd. counting if you're at 5 then go for it. no reset
        for (int i = number; i < newNumber; i++)
        {
            printf("Enter price #%d: ", i + 1);
            scanf("%f", &prices[i]);
        }

        // Display result
        for (int i = 0; i < newNumber; i++)
        {
            printf("$%.2f ", prices[i]);
        }
    }
    // ***** realloc() will also free() old memory! *****

    // just likes renting an apartment: return the key and aparment when we're done with it
    // Important: Do not forget to free memory and returning the key
    free(prices);
    prices = NULL;

    return 0;
}