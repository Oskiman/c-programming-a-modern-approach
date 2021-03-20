/* C Programming A Modern Approach
 * Chapter 3 Formatted Input/Output 
 * Programming Projects 3
 * Write a program that breaks down an ISBN entered
 * by the user */

#include <stdio.h>

int main(void)
{
    printf("Enter ISBN: ");
    int gs1_prefix = 0, group_id = 0, pub_code = 0, item_number = 0, check_digit = 0;
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &pub_code, &item_number, &check_digit);
    
    printf("GS1 Prefix: %d\n", gs1_prefix);
    printf("Group Identifier: %d\n", group_id);
    printf("Publisher Code: %d\n", pub_code);
    printf("Item Number: %d\n", item_number);
    printf("Check Digit: %d\n", check_digit);
    
    return 0;
}
