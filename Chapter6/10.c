/* C Programming A Modern Approach
 * Chapter 6 Loops 
 * Modify Project 9 Chapter 5 so the user may enter any number
 * of dates.  The user will enter 0/0/0 to indicate no more entries */

#include <stdio.h>

int main(void)
{
    int cur_month = 0, cur_day = 0, cur_year = 0;   // store current input
    int early_month = 0, early_day = 0, early_year = 0; // store earliest date
    
    // early dates need to be set to values of first date entered
    int count = 0;
    
    for(;;){
        printf("Enter date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &cur_month, &cur_day, &cur_year);
        
        // if input is 0/0/0 we are finished
        if(cur_month == 0 && cur_day == 0 && cur_year == 0){
            break;
        }
        
        // set early dates to value of first date entered & increment count by 1
        if(count == 0){
            early_month = cur_month;
            early_day = cur_day;
            early_year = cur_year;
            count++;
        }
        // if/else ladder to calculate which date is earlier
        if(cur_year < early_year){      // current date is earlier
            early_day = cur_day;    
            early_month = cur_month;
            early_year = cur_year;
            }
        else if(cur_year == early_year){    // both years are equal, check months value
            if(cur_month < early_month){    // current date is earlier
                early_day = cur_day;    
                early_month = cur_month;
                early_year = cur_year;
        }
        else if(cur_month == early_month){  // both months are equal, check days value
            if(cur_day < early_day){    // current date is earlier
                early_day = cur_day;    
                early_month = cur_month;
                early_year = cur_year;
            }    
        }
        }
        
    }
    
    printf("%d/%d/%d is the earliest date\n", early_month, early_day, early_year);
    
	return 0;
}
