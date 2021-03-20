/* C Programming A Modern Approach
 * Chapter 4 Expressions 
 * Programming Projects 4
 * Write a program that reads an integer entered by the user and
 * displays it in octal (base 8).
 * Output should be displayed using 5 digits */

#include <stdio.h>

int main(void)
{
	printf("Enter a number between 0 and 32767: ");
    int num = 0;
    scanf("%d", &num);
    
    
    int digit_5 = num % 8;
    
    int new_num = num / 8;
    
    int digit_4 = new_num % 8;
    
    int new_num_2 = new_num / 8;
    
    int digit_3 = new_num_2 % 8;
    
    int new_num_3 = new_num_2 / 8;
    
    int digit_2 = new_num_3 % 8;
    
    int new_num_4 = new_num_3 / 8;
    
    int digit_1 = new_num_4 % 8;
    
    printf("In octal, your number is: %d%d%d%d%d\n", digit_1, digit_2, digit_3, digit_4, digit_5);
    
    
    
	return 0;
}
