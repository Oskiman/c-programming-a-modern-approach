/* C Programming A Modern Approach
 * Chapter 5 Selection Statements 
 * Modify the broker.c program of section 5.2 to
 * (a) ask the user to enter the number of shares & price per share
 * instead of the value of the trade
 * (b) Add statements that compute the commission charged by a rival 
 * broker ($33 plus 3c per share for fewer than 2000 shares, 
 * $33 plus 2c per share for 2000 shares or more). Display both commissions */

#include <stdio.h>

int main(void)
{
	float commission, rival_commission, value, price_per_share, number_of_shares;
    printf("Enter the number of shares: ");
    scanf("%f", & number_of_shares);
    printf("Enter the price per share: ");
    scanf("%f", & price_per_share);
    
    value = number_of_shares * price_per_share;
    
    // Original Broker Commissions
    if(value < 2500.00f){
        commission = 30.00f + .017f * value;
    }
    else if(value < 6250.00f){
        commission = 56.00f + .0066f * value;
    }
    else if(value < 20000.00f){
        commission = 76.00f + .0034f * value;
    }
    else if(value < 50000.00f){
        commission = 100.00f + .0022f * value;
    }
    else if(value < 500000.00f){
        commission = 155.00f + .0011f * value;
    }
    else{
        commission = 255.00f + .0009f * value;
    }
    
    if(commission < 39.00f){
        commission = 39.00f;
    }
    
    printf("Original Broker Commission: $%.2f\n", commission);
    
    // Rival Broker Commission
    if(number_of_shares < 2000){
        rival_commission = 33.00f + (number_of_shares * 0.03f);
    }
    else if(number_of_shares >= 2000){
        rival_commission = 33.00f + (number_of_shares * 0.02f);
    }
    
    printf("Rival Broker Commission: $%.2f\n", rival_commission);
    
	return 0;
}
