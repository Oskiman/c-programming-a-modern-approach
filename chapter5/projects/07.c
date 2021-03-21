/* C Programming A Modern ApproachclTabCtrl
 * Chapter 5 Selection Statements 
 * Write a program that finds the largest and smallest
 * of four integers entered by the user */

#include <stdio.h>

int main(void)
{
	printf("Enter four integers: ");
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, smallest = 0, largest = 0;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    if(num1 > num2 && num1 > num3 && num1 > num4){
        largest = num1;
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4){
        largest = num2;
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4){
        largest = num3;
    }
    else if(num4 > num1 && num4 > num2 && num4 > num3){
        largest = num4;
    }

    if(num1 < num2 && num1 < num3 && num1 < num4){
        smallest = num1;
    }
    else if(num2 < num1 && num2 < num3 && num2 < num4){
        smallest = num2;
    }
    else if(num3 < num1 && num3 < num2 && num3 < num4){
        smallest = num3;
    }
    else if(num4 < num1 && num4 < num2 && num4 < num3){
        smallest = num4;
    }
    
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    
	return 0;
}
