/* Chapter 2 Programming Project 8
 * Write a program that calculates the remaining balance on a loan
 * after the first, second and third monthly payments 
 * Display each balance with 2 digits after the decimal point
 * Each month the balance is decreased by the amount of payment
 * but increased by the balance times the monthly interest rate
 * To find the monthly interest rate.convert the interest rate
 * entered by the user to a percentage and divide it by 12 */

#include <stdio.h>

int main(void)
{
    printf("Enter amount of loan: ");
    float loan_amount = 0.0f;
    scanf("%f", &loan_amount);
    
    printf("Enter interest rate: ");
    float interest_rate = 0.0f;
    scanf("%f", &interest_rate);
    
    printf("Enter monthly payment: ");
    float monthly_payment = 0.0f;
    scanf("%f", &monthly_payment);
    
    // Convert interest rate to monthly
    float monthly_interest_rate = 0.0f;
    monthly_interest_rate = (interest_rate / 100) / 12;
    
    float balance_remaining = 0.0f;
    
    // First monthly payment
    balance_remaining = (loan_amount - monthly_payment);
    balance_remaining = balance_remaining + (balance_remaining * monthly_interest_rate);
    
    printf("Balance remaining after first monthly payment: $%.2f\n", balance_remaining);
	
    return 0;
}
