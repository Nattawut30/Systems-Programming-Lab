#include <iostream>
#include <string> // work with the string

int searchArray(int array[], int size, int element);
// match the prototype
int searchArray2(std::string array[], int size, std::string element);

int main()
{
    // ex.1
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    // ex.2
    std::string foods[] = {"Pizza", "Hamburger", "Hotdog"};
    int size2 = sizeof(foods) / sizeof(foods[0]);
    int j;
    std::string myFood;

    // ex.1
    std::cout << "Enter element to search for in numbers: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index << std::endl;
    }
    else
    {
        std::cout << myNum << " is NOT in the array" << std::endl;
    }

    // clear the buffer before use the getline()
    std::cin.ignore();

    // ex.2
    std::cout << "\nEnter element search for in foods: ";
    std::getline(std::cin, myFood);

    j = searchArray2(foods, size2, myFood);

    if (j != -1)
    {
        std::cout << myFood << " is at index " << j << std::endl;
    }
    else
    {
        std::cout << myFood << " is NOT in the array" << std::endl;
    }

    return 0;
}

// ex.1
int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

// ex.2
int searchArray2(std::string array[], int size2, std::string element)
{
    for (int j = 0; j < size2; j++)
    {
        if (array[j] == element)
        {
            return j;
        }
    }
    return -1;
}