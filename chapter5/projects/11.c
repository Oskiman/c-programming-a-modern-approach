/* C Programming A Modern Approach
 * Chapter 5 Selection Statements 
 * Write a program that asks the user for a two digit number
 * then prints the English word for the number */

#include <stdio.h>

int main(void)
{
	printf("Enter a two-digit number: ");
    int num_input1 = 0, num_input2 = 0;
    scanf("%1d%1d", &num_input1, &num_input2);  // split input into 2 digits
    
    printf("You entered the number ");
    // Switch statement for first digit
    switch(num_input1){
        case 1: // 10 - 19 are 'special' cases
            switch(num_input2){
                case 0:
                    printf("ten\n");
                    break;
                case 1:
                    printf("eleven\n");
                    break;
                case 2:
                    printf("twelve\n");
                    break;
                case 3:
                    printf("thirteen\n");
                    break;
                case 4:
                    printf("fourteen\n");
                    break;
                case 5:
                    printf("fifteen\n");
                    break;
                case 6:
                    printf("sixteen\n");
                    break;
                case 7:
                    printf("seventeen\n");
                    break;
                case 8:
                    printf("eighteen\n");
                    break;
                case 9:
                    printf("nineteen\n");
                    break;
            }
            
        case 2:
            printf("twenty-");
            break;
        case 3:
            printf("thirty-");
            break;
        case 4:
            printf("forty-");
            break;
        case 5:
            printf("fifty-");
            break;
        case 6:
            printf("sixty-");
            break;
        case 7:
            printf("seventy-");
            break;
        case 8:
            printf("eighty-");
            break;
        case 9:
            printf("ninety-");
            break;
    }
    
    switch(num_input2){
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
        }
    
	return 0;
}
