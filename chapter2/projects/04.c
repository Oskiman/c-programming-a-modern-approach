/* Chapter 2 Programming Projects 4
 * Write a program that asks the user to enter a
 * dollars & cents amount then displays the amount
 * with a 5% tax added */

#include <stdio.h>

int main(void)
{
    float amount_entered = 0.0f;
	printf("Enter an amount in Dollars and Cents: ");
    scanf("%f", &amount_entered);
    float tax = 0.05f;  // Tax at 5%
    float amount_after_tax = amount_entered + (amount_entered * tax);
    printf("With 5 per cent tax added, %.2f is %.2f\n", amount_entered, amount_after_tax);
	return 0;
}
