/* C Programming A Modern Approach
 * Chapter 6 Loops 
 * Programming Projects 3
 * Write a program that asks the user to enter a fraction,
 * then reduces the fraction to lowest terms */

#include <stdio.h>

int main(void)
{
	printf("Enter a fraction (n/n): ");
    int numerator = 0, numcopy = 0, denominator = 0, dencopy = 0, remainder = 0, gcd = 0;
    scanf("%d/%d", &numerator, &denominator);
    
    // Copy values so originals are unchanged
    numcopy = numerator;
    dencopy = denominator;
    
    // Calculate GCD of numerator & denominator
    while (dencopy != 0){
        remainder = numcopy % dencopy;
        numcopy = dencopy;
        dencopy = remainder;
    }
    
    gcd = numcopy;
    
    // Calculate reduced terms
    numerator /= gcd;
    denominator /= gcd;
    
    printf("In lowest terms: %d/%d\n", numerator, denominator);
	return 0;
}
