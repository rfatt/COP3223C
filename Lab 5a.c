#include <stdio.h>

int main()
{
    int rows, first_row, i, j,k;

    printf("How many rows for your star design?\n");
    scanf("%d", &rows);

    printf("How many stars on the first row?\n");
    scanf("%d", &first_row);

    for (i = 0; i<rows; i++)
    {
        for (j=0; j<first_row; j++)
        {
            printf("*");
        }

        printf("\n");

        for (k=0; k<first_row-1;k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
