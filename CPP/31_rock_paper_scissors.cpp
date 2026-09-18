#include <iostream>
#include <ctime>

char getUserChoice();
char getBotChoice();
void showChoice(char choice);
void chooseWinner(char player, char bot);

// main
int main()
{
    char player;
    char bot;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    bot = getBotChoice();
    std::cout << "Bot choice: ";
    showChoice(bot);

    chooseWinner(player, bot);

    return 0;
}

// function
// userchoice
char getUserChoice()
{
    char player;
    std::cout << "Rock - Paper - Scissors Game!\n";

    do
    {
        std::cout << "Choose one of the following\n";
        std::cout << "***************************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

// bot choice
char getBotChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}
// showChoice
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }
}

// result
void chooseWinner(char player, char bot)
{
    switch (player)
    {
    case 'r':
        if (bot == 'r')
        {
            std::cout << "It's a tie!\n";
        }
        else if (bot == 'p')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;

    case 'p':
        if (bot == 'r')
        {
            std::cout << "You win!\n";
        }
        else if (bot == 'p')
        {
            std::cout << "It's a tie!\n";
        }
        else
        {
            std::cout << "You lose!\n";
        }
        break;

    case 's':
        if (bot == 'r')
        {
            std::cout << "You lose!\n";
        }
        else if (bot == 'p')
        {
            std::cout << "You win!\n";
        }
        else
        {
            std::cout << "It's a tie!\n";
        }
        break;
    }
}