/* C Programming A Modern Approach
 * Chapter 3 Formatted Input/Output 
 * Write a program that asks the user to enter the numbers
 * from 1 to 16 in any order and then displays them in a 
 * four by four arrangement, followed by the sums of the rows, 
 * columns and diagonals */

#include <stdio.h>

int main(void)
{
	printf("Enter the numbers from 1 to 16 in any order: ");
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0;
    int num9 = 0, num10 = 0, num11 = 0, num12 = 0, num13 = 0, num14 = 0, num15 = 0, num16 = 0;
    
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
    
    printf("%d %d %d %d\n", num1, num2, num3, num4);
    printf("%d %d %d %d\n", num5, num6, num7, num8);
    printf("%d %d %d %d\n", num9, num10, num11, num12);
    printf("%d %d %d %d\n", num13, num14, num15, num16);
    
    int row1 = (num1 + num2 + num3 + num4);
    int row2 = (num5 + num6 + num7 + num8);
    int row3 = (num9 + num10 + num11 + num12);
    int row4 = (num13 + num14 + num15 + num16);
    
    int col1 = (num1 + num5 + num9 + num13);
    int col2 = (num2 + num6 + num10 + num14);
    int col3 = (num3 + num7 + num11 + num15);
    int col4 = (num4 + num8 + num12 + num16);
    
    int diag_tl_br = (num1 + num6 + num11 + num16);     // Diagonal top left - bottom right
    int diag_bl_tr = (num13 + num10 + num7 + num4);     // Diagonal bottom left - top right
    
    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d\n", diag_tl_br, diag_bl_tr);
    
    return 0;
}
