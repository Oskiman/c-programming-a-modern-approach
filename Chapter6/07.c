/* C Programming A Modern Approach
 * Chapter 6 Loops 
 * Programming Projects 7
 * Rearrange the square3.c program so that the for loop 
 * initialises i, tests i and increments i.  Don't rewrite
 * the program, in particular, don't use any multiplications */

#include <stdio.h>

int main(void)
{
	int n, odd, square; // i removed, initialised in for loop
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    //i = 1;    Commented out, is initialised in for loop
    odd = 3;
    
    // Original code copied from book (p.110)
//    for(square = 1; i <= n; odd += 2){
//        printf("%10d%10d\n", i, square);
//        ++i;
//        square += odd;
//    }
    
    for(int i = 1, square = 1; i <= n; odd += 2, ++i){
        printf("%10d%10d\n", i, square);
        //++i;
        square += odd;
    }
    
	return 0;
}
