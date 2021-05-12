/* C Programming A Modern Approach
 * Chapter 6 Loops 
 * Programming Project 1
 * Write a program that finds the largest in a series of numbers
 * entered by the user. The program must prompt the user to enter
 * the numbers one by one.  When the user enters 0 or a negative
 * number, the program must diplay the largest non-negative number entered. */

#include <stdio.h>

int main(void)
{
	printf("Enter a number: ");
    float input_num = 0.0;
    scanf("%f", &input_num);
    
    float largest_num_input = 0.0;
    
    while(input_num > 0.0){
        if(input_num > largest_num_input){
            largest_num_input = input_num;
        }
        
        printf("Enter a number: ");
        scanf("%f", &input_num);
    }
    
    printf("The largest number entered was: %.2f\n", largest_num_input);
    
	return 0;
}
