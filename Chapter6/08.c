/* C Programming A Modern Approach
 * Chapter 6 Loops 
 * Programming Projects 8
 * Write a program that prints a one month calendar.
 * The user specifies the number of days in the month and
 * the day of the week on which the month begins */

#include <stdio.h>

int main(void)
{
    int days_in_month, start_day;
    int day = 1;
	printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);
    printf("Enter starting day of the week (1 = Sunday, 7 = Saturday): ");
    scanf("%d", &start_day);
    
    int iters = (days_in_month + start_day) + 1;
    
    for(int i = 1; i <= iters; i++){
        
        if(i < start_day){  // Print blank spaces until we reach the correct starting day
            printf("   ");
        }
        
        else if(day <= days_in_month){
        printf("%3d", day);   // Print day then interate by 1 ready for the next
        day++;
        }
        
        if(i % 7 == 0){ // Is it the last day of the week?, if so output a newline
            printf("\n");
        }    
    }
    
    printf("\n");
    
	return 0;
}
