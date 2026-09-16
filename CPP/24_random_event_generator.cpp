#include <iostream>
#include <ctime> // header

int main()
{

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a bumper sticker!" << std::endl;
        break;
    case 2:
        std::cout << "You win a T-shirt!" << std::endl;
        break;
    case 3:
        std::cout << "You win a free lunch!" << std::endl;
        break;
    case 4:
        std::cout << "You win a gift card!" << std::endl;
        break;
    case 5:
        std::cout << "You win a concert ticket!" << std::endl;
        break;
    }

    return 0;
}