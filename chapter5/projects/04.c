/* C Programming A Modern Approach
 * Chapter 5 Selection Statements 
 * Write a program that aska the user to enter a wind speed (in knots)
 * then displays the corresponding description 
 * Speed(knots)             Description
 * Less than 1              Calm
 * 1 - 3                    Light Air
 * 4 - 27                   Breeze
 * 28 - 47                  Gale
 * 48 - 63                  Storm
 * Above 63                 Hurricane */

#include <stdio.h>

int main(void)
{
	printf("Enter a wind speed in knots: ");
    int wind_speed_knots = 0;
    scanf("%d", &wind_speed_knots);
    
    if(wind_speed_knots < 1){
        printf("Calm\n");
    }
    else if(wind_speed_knots >= 1 && wind_speed_knots <= 3){
        printf("Light Air\n");
    }
    else if(wind_speed_knots >= 4 && wind_speed_knots <= 27){
        printf("Breeze\n");
    }
    else if(wind_speed_knots >= 28 && wind_speed_knots <= 47){
        printf("Gale\n");
    }
    else if(wind_speed_knots >= 48 && wind_speed_knots <= 63){
        printf("Storm\n");
    }
    else if(wind_speed_knots > 63){
        printf("Hurricane\n");
    }
	return 0;
}
