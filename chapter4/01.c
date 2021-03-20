/* C Programming A Modern Approach
 * Chapter 4 Expressions 
 * Programming Projects 1
 * Write a program that asks the user to enter a two digit number
 * then prints the number with its digits reversed */

#include <stdio.h>

int main(void)
{
	printf("Enter a two-digit number: ");
    int num1 = 0;
    scanf("%d", &num1);
    int rnum1 = num1 / 10;
    int rnum2 = num1 % 10;
    printf("The reversal is: %d%d\n", rnum2, rnum1);
    
    
	return 0;
}
