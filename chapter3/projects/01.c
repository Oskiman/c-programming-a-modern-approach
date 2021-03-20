/* C Programming A Modern Approach
 * Chapter 3 Formatted Input/Output
 * Programming Projects 1
 * Write a program that accepts a date from the user 
 * in the form mm/dd/yyyy and then displays it in
 * the form yyyymmdd */

#include <stdio.h>

int main(void)
{
    printf("Enter a date (mm/dd/yyyy): ");
    int month = 0, day = 0, year = 0;
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("You entered the date: %d%d%d\n", year, month, day);
	
    return 0;
}
