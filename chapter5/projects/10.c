/* C Programming A Modern Approach
 * Chapter 5 Selection Statements 
 * Programming Projects 10
 * Using the switch statement, write a program that converts a numerical grade
 * into a letter grade.
 * Use the following grading scale:
 * A = 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59
 * Print an error message if the grade is > 100 or < 0 */

#include <stdio.h>

int main(void)
{
	printf("Enter numerical grade: ");
    int num_grade_tens = 0, num_grade = 0;
    scanf("%d", &num_grade);
    
    num_grade_tens = (num_grade / 10);
    
    if(num_grade < 0 || num_grade > 100){
        printf("Incorrect grade entered\n");
    }
    else{
        printf("Letter Grade: ");
        switch(num_grade_tens){ // Check value of 10's
            case 10:
            case 9:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 6:
                printf("D\n");
                break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                printf("F\n");
                break;
            default:
                printf("Incorrect grade entered\n");
            
        }
    }
	return 0;
}
