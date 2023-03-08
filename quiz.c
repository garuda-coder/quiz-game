#include <stdio.h>
#include <ctype.h>
int main()
{
    char questions[][100] = {
        "1. What is the capital of Maharashtra?",
        "2. Who is the inventor of C++ language?",
        "3. Who has the most runs in ODI cricket?"};

    char options[][40] = {
        "A. Ranchi", "B. Lucknow", "C. Hyderabad", "D. Mumbai",
        "A. Dennis Ritchie", "B. Mark Zuckerberg", "C. Bjarne Strotouspe", "D. Karl Marx",
        "A. Virat Kohli", "B. Sachin Tendulkar", "C. Ricky Ponting", "D. Kumar Sangakarra"};

    char answers[3] = {'D', 'C', 'B'};
    int numberofQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME");

    for (int i = 0; i < numberofQuestions; i++)
    {
        printf("\n\n****************************************");
        printf("\n%s", questions[i]);
        printf("\n****************************************");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("\n%s", options[j]);
        }

        printf("\nGuess: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("\nCorrect Answer!!!");
            score++;
        }

        else
        {
            printf("\nWrong Answer!!!");
        }
    }

    printf("\n\n*******************************");
    printf("\nFINAL SCORE: %d/%d ", score, numberofQuestions);
    printf("\n*******************************");

    return 0;
}