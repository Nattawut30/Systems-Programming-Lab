#include <stdio.h>

int main(){

    // Array = a fixed-size collection of elements of the same data type
    // (Similar to a variable but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50, 60}; // array
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Nattawut";

    int size = sizeof(numbers) / sizeof(numbers[0]); 

    numbers[0] = 100; // change the element from 10 to 100

    printf("%d\n", numbers[2]); // called the element in the array
    printf("%c\n", grades[1]);
    printf("%c\n", name[3]);
    printf("%d\n", numbers[0]); // 10 -> 100

    printf("%lu\n", sizeof(numbers)); // check the size of array
    printf("%lu\n", sizeof(numbers[0])); // check the size of elements
    
    
    for(int i = 0; i < size; i++){ // replace 'size' with sizeof(numbers) / sizeof(numbers[0]) is works too.
        printf("%d ", numbers[i]);
    }
        
    return 0;
}