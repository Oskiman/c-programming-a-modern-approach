/* C Programming A Modern Approach
 * Chapter 4 Expressions 
 * Programming Projects 3
 * Rewrite Programming Project 2 so it prints the reversal
 * of a three digit number without using arithmetic to split the number into digits */

#include <stdio.h>

int main(void)
{
	printf("Enter a three-digit number: ");
    int num1 = 0, num2 = 0, num3 = 0;
    scanf("%1d%1d%1d", &num1, &num2, &num3);    // The 1d specifier reads 1 int at a time
    
    printf("The reversal is: %d%d%d\n", num3, num2, num1);
	return 0;
}
