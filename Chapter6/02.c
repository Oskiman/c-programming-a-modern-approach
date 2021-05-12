/* C Programming A Modern Approach
 * Chapter 6 Loops 
 * Write a program that asks the user to enter two integers,
 * then calculates and displays their greatest common divisor (GCD) */

#include <stdio.h>

int main(void)
{
	
    printf("Enter two integers: ");
    int num1 = 0, num2 = 0, remainder = 0;
    scanf("%d %d", &num1, &num2);
    
    while (num2 != 0){
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    
    printf("Greatest common divisor: %d\n", num1);
    
	return 0;
}
