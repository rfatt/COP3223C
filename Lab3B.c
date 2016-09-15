#include <stdio.h>

int main()
{
    int hour_now, minute_now, game_minutes, hw_minutes, due_hour, due_minute, total_time, time_remaining;

    printf("Please enter the current hour and minute, seperated by a space.\n");
    scanf("%d %d", &hour_now, &minute_now);

    printf("How many minutes will the videogame take to play?\n");
    scanf("%d", &game_minutes);

    printf("How many minutes will your homework take?\n");
    scanf("%d", &hw_minutes);

    printf("Please enter the hour and minute the homework is due.\n");
    scanf("%d %d", &due_hour, &due_minute);

    total_time = game_minutes + hw_minutes;

    time_remaining = ((due_hour * 60) + due_minute) - ((hour_now * 60) + minute_now);

    if(time_remaining >= total_time)
    {
        printf("Great, you can play the game and still finish your homework.\n");
    }

    else
    {
        printf("Sorry, no game for you. Just do your homework.\n");
    }

    return 0;
}
