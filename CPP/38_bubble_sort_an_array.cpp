#include <iostream>

void sort(int array[], int size);

int main()
{

    // Standard bubble sort the array

    // index = {1, 10, 2, 3, 4, 5, 6, 7, 8, 9} << wrong order right? sort them to be correct!
    // temp = _

    // index = {1, _, 2, 3, 4, 5, 6, 7, 8, 9}
    // temp = 10

    // index = {1, 2, _, 3, 4, 5, 6, 7, 8, 9}
    // temp = 10

    // index = {1, 2, 10, 3, 4, 5, 6, 7, 8, 9}
    // temp = _

    // index = {1, 2, _, 3, 4, 5, 6, 7, 8, 9}
    // temp = 10

    // index = {1, 2, 3, _, 4, 5, 6, 7, 8, 9}
    // temp = 10

    // index = {1, 2, 3, 10, 4, 5, 6, 7, 8, 9}
    // temp = _

    // index = {1, 2, 3, _, 4, 5, 6, 7, 8, 9}
    // temp = 10

    // index = {1, 2, 3, 4, _, 5, 6, 7, 8, 9}
    // temp = 10

    // index = {1, 2, 3, 4, 10, 5, 6, 7, 8, 9}
    // temp = _

    // index = {1, 2, 3, 4, _, 5, 6, 7, 8, 9}
    // temp = 10

    // index = {1, 2, 3, 4, 5, _, 6, 7, 8, 9}
    // temp = 10

    // index = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9}
    // temp = _

    // index = {1, 2, 3, 4, 5, _, 6, 7, 8, 9}
    // temp = 10

    // index = {1, 2, 3, 4, 5, 6, _, 7, 8, 9}
    // temp = 10

    // index = {1, 2, 3, 4, 5, 6, 10, 7, 8, 9}
    // temp = _

    // repeat untill the end and make it correct order!

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5}; // unorder array
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int element : array)
    {
        std::cout << element << " ";
    }
    return 0;
}
void sort(int array[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {                                          // no need to compare the last element to anything
        for (int j = 0; j < size - i - 1; j++) // we don't need to sort any elements that already sorted!
        {
            if (array[j] > array[j + 1]) // swap larger -> smaller use '<'
            {                            // element on the left bigger than element on the right = swap it
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}