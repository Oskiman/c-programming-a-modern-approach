/* C Programming A Modern Approach
 * Chapter 3 Formatted Input/Output 
 * Programming Practice 2
 * Write a program that formats product information entered by the user.
 * Item         Unit            Purchase
 *              Price           Date */

#include <stdio.h>

int main(void)
{
    printf("Enter item number: ");
    int item_number = 0;
    scanf("%d", &item_number);
    
    printf("Enter unit price: ");
    float unit_price = 0.0;
    scanf("%f", &unit_price);
    
	printf("Enter purchase date (mm/dd/yyyy): ");
    int month = 0, day = 0, year = 0;
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("Item            Unit            Purchase\n");
    printf("                Price           Date\n");
    printf("%-d             $%.2f          %-d/%-d/%-d\n", item_number, unit_price, month, day, year);
    
	return 0;
}
