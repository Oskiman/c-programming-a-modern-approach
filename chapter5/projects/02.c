/* C Programming A Modern Approach
 * Chapter 5 Selection Statements 
 * Write a program that asks the user for a 24 hour time then
 * displays the time in 12 hour form */

#include <stdio.h>

int main(void)
{
	printf("Enter a 24 hour time: ");
    int hours = 0, minutes = 0;
    scanf("%d:%d", &hours, &minutes);
    
//    if(hours == 24){
//        hours = 00;
//    }
    if(hours > 12){
        hours -= 12;
        printf("Equivalent 12 hour time: %d:%d PM\n", hours, minutes);
        //break;
    }
    else{
    printf("Equivalent 12 hour time: %d:%d AM\n", hours, minutes);
    }
	
	return 0;
}
