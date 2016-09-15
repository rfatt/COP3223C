#include <stdio.h>

int main()
{
    float cost_unit, total_cost;
    int purchase_quantity;

    printf("What is the cost of one container of OJ in dollars?\n");
    scanf("%f", &cost_unit);

    printf("How many containers are you buying?\n");
    scanf("%d", &purchase_quantity);

    if (purchase_quantity % 2 == 0)
    {
        total_cost = (cost_unit * purchase_quantity) / 2;
    }

    else
    {
        total_cost = ((cost_unit * (purchase_quantity / 2)) + (cost_unit));
    }

    printf("The total cost is $%.2f\n", total_cost);

    return 0;
}
