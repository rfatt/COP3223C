#include <stdio.h>

int main()
{
    int size, stolen_count, stolen_ounces, i;
    float price, cost_per_ounce, payback;

    printf("What is the weight (in oz.) of the original container of OJ?\n");
    scanf("%d", &size);

    printf("What is the cost of the original container of OJ in dollars?\n");
    scanf("%f", &price);

    cost_per_ounce = price/size;

    printf("How many times did your roomate take your juice?\n");
    scanf("%d", &stolen_count);

    for (i = 1; i <= stolen_count; i++)
    {
        printf("How much juice did your roommate take this time (in oz.)\n");
        scanf("%d", &stolen_ounces);
        payback += stolen_ounces * cost_per_ounce;

        if (payback >= 10)
        {
            printf("Your roommate owes you $10.00\n");
            payback -= 10;
        }
    }

    printf("Your roomate owes you $%.2f", payback);

    return 0;
}
