#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int money_owed, guess,guess_count;

    srand(time(NULL));
    money_owed = rand()%4500 + 500;

    while (guess_count = 100)
    {
        printf("How much do you think you owe?\n");
        scanf("%d", &guess);

        if (guess < money_owed)
        {
            printf("Yes, you owe more than %d dollars.\n", guess);
            guess_count++;
        }

        else if (guess > money_owed)
        {
            printf("No, you do not owe more than %d dollars.\n", guess);
            guess_count++;
        }

        else if (guess == money_owed)
        {
            printf("Congratulations for figuring out you owe X dollars.\n", guess);
            break;
        }
    }
    return 0;
}
