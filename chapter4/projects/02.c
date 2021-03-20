/* C Programming A Modern Approach
 * Chapter 4 Expressions 
 * Programming Projects 2
 * Extend the code from Programming Projects 1 to
 * handle three digit numbers */

#include <stdio.h>

int main(void)
{
	printf("Enter a three-digit number: ");
    int num = 0;
    scanf("%d", &num); 
    int rnum3 = (num /100) % 10;    // last digit
    int rnum1 = (num / 10) % 10;   // middle digit
    int rnum2 = num % 10;   // first digit
    
    printf("The reversal is: %d%d%d\n", rnum2, rnum1, rnum3);
    
    
	return 0;
}
