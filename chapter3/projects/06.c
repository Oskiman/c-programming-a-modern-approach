/* C Programming A Modern Approach
 * Chapter 3 Formatted Input/Output 
 * Modify the addfrac.c program of section 3.2 so that the user
 * enters both fractions at the same time, separated by a + sign */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    
//    printf("Enter first fraction: ");
//    scanf("%d/%d", &num1, &denom1);
//    
//    printf("Enter second fraction: ");
//    scanf("%d/%d", &num2, &denom2);

    printf("Enter the fractions to add (x/x + x/x): ");
    scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);
    
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    
    printf("The sum is %d/%d\n", result_num, result_denom);
	
    return 0;
}
