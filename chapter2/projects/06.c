/* Chapter 2 Programming Projects 6
 * Modify Project 5 to use the following calculation
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6 */

#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Enter a value for x: ");
    float x = 0.0f;
    scanf("%f", &x);
    
    float total = 0.0f;
    // Polynomial
    //total = ((3 * (x * x * x * x * x) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6));
    total = ((((3 * x + 2) * x - 5) * x - 1) * x + 7)  * x - 6;
    printf("The total is: %.2f\n", total);
	return 0;
}
