#include <stdio.h>
#include <stdlib.h>

int main()
{

    // calloc() = Contiguous Allocation
    // Allocates memory dynamically and sets all allocated bytes to 0
    // malloc() is faster, but calloc() leads to less bugs
    // calloc(#, size)
    // or "CLEAR" allocation

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    // check memory to prevent segmentation fault
    if (scores == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    // continune input
    for (int i = 0; i < number; i++)
    {
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // display result
    for (int i = 0; i < number; i++)
    {
        printf("%d ", scores[i]);
    }

    // Important: dont forget to free your memory and returning the key
    free(scores);
    scores = NULL;

    return 0;
}