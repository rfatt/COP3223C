/* Ryan Fatt
   COP 3223C
   Section 16
   Program 1 - knit.c
   9/2/2016
   This program calculates the number of hats and sweaters that can be made based on the number of balls of yard and the number of yarn in each ball
*/

#include <stdio.h>


//Constants for balls of yard to make a hat and sweater. Not needed at current program complexity but may be needed if the program grows
#define hat     225
#define sweater 450


int main()
{
	/* Variables declared to hold the number of balls of yarn and how many yards are in each ball as well as how many hats and sweaters can be made.
	   An extra variable to store the total_yarn was declared so the calculation for total yarn could be performed once. */
	int balls, yards, total_yarn, hats_made, sweaters_made;

	// Print and scan statemtns to take in balls of yarn and yards of yarn per ball
    	printf("How many balls of yarn do you have?\n");
    	scanf("%d", &balls);

    	printf("How many yards are in each ball of yarn?\n");
    	scanf("%d", &yards);

	/* Calculations for how much yarn is available in total and how many hats and sweaters can be made based on that.
	   Integer division was used since you can't make part of a hat or sweater the remainder of the number is not needed. */
    	total_yarn = (balls * yards);
    	hats_made = total_yarn / hat;
    	sweaters_made = total_yarn / sweater;

    	// Final print statement to output the number of hats and sweaters that can be made
	printf("\nYou can make %d hats or %d sweaters.\n", hats_made, sweaters_made);

    	return 0;
}
