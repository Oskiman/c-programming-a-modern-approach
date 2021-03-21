/* C Programming A Modern Approach
 * Chapter 5 Selection Statements 
 * Programming Projects 9
 * Write a program that prompts the user to enter two dates
 * and indicate which date is earlier in the calendar */

#include <stdio.h>

int main(void)
{
    printf("Enter first date (mm/dd/yy): ");
    int fd_month = 0, fd_day = 0, fd_year = 0;
    scanf("%2d/%2d/%2d", &fd_month, &fd_day, &fd_year);
    
    printf("Enter second date (mm/dd/yy): ");
    int sd_month = 0, sd_day = 0, sd_year = 0;
    scanf("%2d/%2d/%2d", &sd_month, &sd_day, &sd_year);
    
    // if/else ladder to calculate which date is earlier
    // We are using an int as a flag for output, to avoid code repetition
    int date_flag = 0;
    
    if(fd_year < sd_year)      // first date is earlier
        date_flag = 1;
    else if(fd_year > sd_year)  // second date is earlier
        date_flag = 2;
    else if(fd_year == sd_year){    // both years are equal, check months value
        if(fd_month < sd_month){    // first date is earlier
            date_flag = 1;
        }
        else if(fd_month > sd_month){   // second date is earlier
            date_flag = 2;
        }
        else if(fd_month == sd_month){  // both months are equal, check days value
            if(fd_day < sd_day){    // first date is earlier
                date_flag = 1;
            }
            else if(fd_day > sd_day){   // second date is earlier
                date_flag = 2;      
            }
            else if(fd_day == sd_day){  // both dates are the same
                date_flag = 3;
            }
        }
    }
    
    if(date_flag == 1){ // first date is earlier
        printf("%d/%d/%d is earlier than %d/%d/%d\n", fd_month, fd_day, fd_year, sd_month, sd_day, sd_year);
    }
    else if(date_flag == 2){    // second date is earlier
        printf("%d/%d/%d is earlier than %d/%d/%d\n", sd_month, sd_day, sd_year, fd_month, fd_day, fd_year);
    }
    else if(date_flag == 3){
        printf("%d/%d/%d and %d/%d/%d are the same\n", fd_month, fd_day, fd_year, sd_month, sd_day, sd_year);
    }
	return 0;
}
