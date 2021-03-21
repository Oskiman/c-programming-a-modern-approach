/* C Programming A Modern Approach
 * Chapter 5 Selection Statements 
 * Write a program that asks the user to enter the amount of
 * taxable income, then displays the tax due 
 * Income                   Amount of tax
 * Not over $750            1% of income
 * $750 - $2,250            $7.50 plus 2% of amount over $750
 * $2,250 - $3,750          $37.50 plus 3% of amount over $2,250
 * $3,750 - $5,250          $82.50 plus 4% of amount over $3,750
 * $5,250 - $7,000          $142.50 plus 5% of amount over $5,250
 * Over $7,000              $230.00 plus 6% of amount over $7,000 */

#include <stdio.h>

int main(void)
{
	printf("Enter the amount of taxable income: $");
    float taxable_income = 0.0f, tax_due = 0.0f;
    scanf("%f", &taxable_income);
    
    if(taxable_income <= 750){
        tax_due = (taxable_income * 0.01);
    }
    else if(taxable_income >= 750 && taxable_income <= 2250){
        tax_due = ((taxable_income * 0.02) + 7.50);
    }
    else if(taxable_income >= 2250 && taxable_income <= 3750){
        tax_due = ((taxable_income * 0.03) + 37.50);
    }
    else if(taxable_income >= 3750 && taxable_income <= 5250){
        tax_due = ((taxable_income * 0.04) + 82.50);
    }
    else if(taxable_income >= 5250 && taxable_income <= 7000){
        tax_due = ((taxable_income * 0.05) + 142.50);
    }
    else if(taxable_income > 7000){
        tax_due = ((taxable_income * 0.06) + 230.00);
    }
    
    // Output tax due
    printf("Amount of tax due: $%.2f\n", tax_due);
    
    
	return 0;
}
