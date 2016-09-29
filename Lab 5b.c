#include <stdio.h>

int main()
{
    int friend, roommate, you, total_slices, i, j;

    printf("How many slices of pizza are you getting all together?\n");
    scanf("%d", &total_slices);

    for (i = 1; i <= total_slices; i++)
      {
          for (j = i+1; j < total_slices; j++)
          {
              friend = i;
              roommate = j;
              you = total_slices - (friend+roommate);

              if (you > roommate)
              {
                  printf("Friend = %d, Roommate = %d, You = %d\n", friend, roommate, you);
              }
          }
      }
    return 0;
}




