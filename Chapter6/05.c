/* C Programming A Modern Approach
 * Chapter 6 Loops 
 * Programming Projects 5
 * Generalize Ch4 Project1 to allow for more digits */

#include <stdio.h>

int main(void){
 
	printf("Enter a number: ");
    int num1 = 0;
    scanf("%d", &num1);
    
    int reversal, remainder;
    
    while(num1 != 0){
        remainder = num1 % 10;  // Get the last digit
        reversal = reversal * 10 + remainder;   // Use math trickery to place last digit in first place
        num1 /= 10;     // Get rid of last digit
    }
    
    printf("The reversal is: %d\n", reversal);
    
    
	return 0;
}

