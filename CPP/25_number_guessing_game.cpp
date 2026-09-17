#include <iostream>

int main()
{

    int num;
    int guess;
    int tries = 0; // set up the default at 0

    srand(time(NULL));
    num = (rand() % 100) + 1; // random the number 1-100

    std::cout << "********** NUMBER GUESSING GAME ********** \n";

    do
    {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++; // keep tracking the score

        if (guess > num)
        {
            std::cout << "Too High!\n";
        }
        else if (guess < num)
        {
            std::cout << "Too Low!\n";
        }
        else
        {
            std::cout << "CORRECT! # of tries: " << tries << std::endl;
        }

    } while (guess != num);

    std::cout << "******************************\n";

    return 0;
}