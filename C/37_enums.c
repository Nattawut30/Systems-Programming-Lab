#include <stdio.h>

typedef enum // use it with typedef is fine
{
    SUNDAY = 1,
    MONDAY = 2,
    TUESDAY = 3,
    WEDNESDAY = 4,
    THURSDAY = 5,
    FRIDAY = 6,
    SATURDAY = 7
} Day; // constant must be big-capital letter. if you dont set the value, it will be 0 by default

typedef enum
{
    SUCCESS,
    FAILURE,
    PENDING
} Status;

void connectStatus(Status status); // function

int main()
{
    // enum = A user-defined data type that consists
    // of a set of name integer constants.
    // Benefit: Replaces numbers with readable names

    // SUNDAY = 0;
    // MONDAY = 1;
    // TUESDAY = 2;

    Day today = SUNDAY;
    printf("%d\n", today);

    if (today == SUNDAY || today == SATURDAY)
    {
        printf("It's the weekend\n");
    }
    else
    {
        printf("It's a weekday\n");
    }

    Status status = PENDING; // pass variable to the function

    connectStatus(status);

    return 0;
}

void connectStatus(Status status) // function
{
    switch (status)
    {
    case SUCCESS:
        printf("Connection was successful!\n");
        break;
    case FAILURE:
        printf("Could not connect!\n");
        break;
    case PENDING:
        printf("Connecting...\n");
        break;
    }
}