/* Chapter 2 Programming Projects 5
 * Write a program that asks the user to enter a value for x
 * and then displays the value of the following polynomial
 * 3x^5 + 2x^4 - 5x^3 - x^2 +7x - 6 */

#include <stdio.h>

int main(void)
{
    printf("Enter a value for x: ");
    float x = 0.0f;
    scanf("%f", &x);
    
    float total = 0.0f;
    // Polynomial
    total = ((3 * (x * x * x * x * x) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6));
    printf("The total is: %.2f\n", total);
	
    return 0;
}
