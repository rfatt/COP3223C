#include <stdio.h>

int main()
{
    int origin_weight, before_class_weight, after_class_weight;
    float juice_cost, money_owed;

    printf("What is the weight (in oz.) of the original container of OJ?\n");
    scanf("%d", &origin_weight);

    printf("What is the cost of the original container of OJ in dollars?\n");
    scanf("%f", &juice_cost);

    printf("What was the weight (in oz.) of the container before class?\n");
    scanf("%d", &before_class_weight);

    printf("What was the weight (in oz.) of the container after class?\n");
    scanf("%d", &after_class_weight);


    /* Calculate the percent of juice you consumed to determine what the juice left was worth and then find out the percent of juice consumed by your roommate and times
    that by the cost of juice left */

    juice_cost -= ((origin_weight - before_class_weight) / (double) origin_weight) * juice_cost;
    money_owed = ((before_class_weight - after_class_weight)/(double) before_class_weight) * juice_cost;

    printf("Your roommate owes $%.2f", money_owed);

    return 0;
}
