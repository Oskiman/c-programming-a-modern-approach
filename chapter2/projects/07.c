/* Chapter 2 Programming Projects 7
 * Write a program that asks the user to enter a US Dollar amount
 * and then shows how to pay the amount using the smallest
 * number of $20, $10, $5 and $1 bills */

#include <stdio.h>

int main(void)
{
	printf("Enter an amount of dollars: ");
    int amount_of_dollars = 0;
    scanf("%d", &amount_of_dollars);
    
    int remainder = 0;
    int amount_of_twenties = 0, amount_of_tens = 0, amount_of_fives = 0, amount_of_ones = 0;
    int twenties = 20, tens = 10, fives = 5;
    
    amount_of_twenties = amount_of_dollars / twenties;
    remainder = amount_of_dollars % twenties;
    amount_of_tens = remainder / tens;
    remainder = remainder % tens;
    amount_of_fives = remainder / fives;
    remainder = remainder % fives;
    amount_of_ones = remainder;
    
    printf("$20 bills: %d\n", amount_of_twenties);
    printf("$10 bills: %d\n", amount_of_tens);
    printf("$5 bills: %d\n", amount_of_fives);
    printf("$1 bills: %d\n", amount_of_ones);
    
	return 0;
}
