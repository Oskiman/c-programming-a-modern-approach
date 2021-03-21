/* C Programming A Modern Approach
 * Chapter 5 Selection Statements 
 * Programming Projects 1
 * Write a program that calculates how many digits a number contains */

#include <stdio.h>

int main(void)
{
	printf("Enter a number: ");
    int num = 0;
    int digits = 0;
    scanf("%d", &num);
    
    if(num >=0 && num <= 9){
        digits = 1;
    }
    else if(num >= 10 && num <= 99){
        digits = 2;
    }
    else if(num >= 100 && num <= 999){
        digits = 3;
    }
    else if(num >= 1000 && num <= 9999){
        digits = 4;
    }
    
    printf("The number %d has %d digits\n", num, digits);
	

	return 0;
}
