/* C Programming A Modern Approach
 * Chapter 3 Formatted Input/Output 
 * Programming Projects 4
 * Write a program that prompts the user to enter a telephone number
 * in the form (xxx) xxx-xxxx and then displays it in the form xxx.xxx.xxxx */

#include <stdio.h>

int main(void)
{
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int area_code = 0, num3 = 0, num4 = 0;
    scanf("(%d) %d-%d", &area_code, &num3, &num4);
    
    printf("You entered: %d.%d.%d\n", area_code, num3, num4);
	return 0;
}
