/* C Programming A Modern Approach
 * Chapter 6 Loops 
 * Programming Projects 6
 * Write a program that prompts the user to enter a number n, then
 * prints all even squares between 1 and n */

#include <stdio.h>

int main(void)
{
	printf("Enter a number: ");
    int num1, i;
    scanf("%d", &num1);

    for (i = 2; i * i <= num1; i += 2)
        printf("%d\n", i * i);
    
	return 0;
}
