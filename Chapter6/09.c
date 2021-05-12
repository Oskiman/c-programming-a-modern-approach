/* C Programming A Modern Approach
 * Chapter 6 Loops 
 * Modify Project 8 from Chapter 2 to ask the user for
 * the number of payments then displays the balance remaining
 * after each payment */

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
    
    // Modified code here
    printf("Enter number of payments: ");
    int num_of_payments = 0;
    scanf("%d", &num_of_payments);
    
    // Convert interest rate to monthly
    float monthly_interest_rate = monthly_interest_rate = (interest_rate / 100) / 12;
    
    // First monthly payment
    float balance_remaining = (loan_amount - monthly_payment);
    balance_remaining = balance_remaining + (balance_remaining * monthly_interest_rate);
    
    printf("Balance remaining after first monthly payment: $%.2f\n", balance_remaining);

    for(int i = 2; i <= num_of_payments; i++){
    balance_remaining = (balance_remaining - monthly_payment);
    balance_remaining = balance_remaining + (balance_remaining * monthly_interest_rate);
    
    printf("Balance remaining after %d monthly payment: $%.2f\n", i, balance_remaining);
    
    }
	return 0;
}
