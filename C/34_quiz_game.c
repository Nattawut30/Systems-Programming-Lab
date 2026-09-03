#include <stdio.h>
#include <ctype.h>

int main()
{
    // Quiz Game

    char questions[][100] = {
        "What is the largest planet in the solar system?",
        "What is the hottest planet?",
        "What planet has the most moons?",
        "Is the Earth flat?"};

    char options[][100] = {" A. Jupyter\n B. Saturn\n C. Uranus\n D. Neptune",
                           " A. Mercury\n B. Venus\n C. Earth\n D. Mars",
                           " A. Earth\n B. Mars\n C. Jupiter\n D. Saturn",
                           " A. Yes\n B. Maybe\n C. Nope\n D. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'C'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("***** QUIZ GAME *****\n");

    for (int i = 0; i < questionCount; i++)
    {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess); // need header

        if (guess == answerKey[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG!\n");
        }
    }

    printf("\nYour score is %d out of %d points\n", score, questionCount);

    return 0;
}