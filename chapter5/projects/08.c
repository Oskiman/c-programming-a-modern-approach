/* C Programming A Modern Approach
 * Chapter 5 Selection Statements 
 * Write a program that asks the user to enter a time
 * (expressed in hours and minutes, using the 24 hour clock).
 * The program then displays the departure & arrival times for the flight whose
 * departure time is closest to that entered by the user. 
 * Departure Time           Arrival Time
 * 8:00am                   10:16am
 * 9:43am                   11:52am
 * 11:19am                  1:31pm
 * 12:47pm                  3:00pm
 * 2:00pm                   4:08pm
 * 3:45pm                   5:55pm
 * 7:00pm                   9:20pm
 * 9:45pm                   11:58pm */

#include <stdio.h>

int main(void)
{
	printf("Enter a 24-hour time (hh:mm): ");
    int hours_24 = 0, minutes = 0;
    scanf("%2d:%2d", &hours_24, &minutes);
    
    // Input converted into minutes since midnight
    int mins_since_midnight = (hours_24 * 60) + minutes;
    
    // In the second part of each computation, (n / 2), n is the number of
    // minutes between departure times. 8:00am - 9:43am is 103 minutes
    // Division by 2 then gives us the halfway point between departures to
    // allow us to calculate which departure time is closest
    if (mins_since_midnight <= ((8 * 60) + (103 / 2))){
        printf("Closest departure time is 8:00 AM, arriving at 10:16 AM");}
    else if (mins_since_midnight < ((9 * 60) + 43) + (96 / 2)){
        printf("Closest departure time is 9:43 AM, arriving at 11:52 AM");}
    else if (mins_since_midnight < ((11 * 60) + 19) + (88 / 2)){
        printf("Closest departure time is 11:19 AM, arriving at 1:31 PM");}
    else if (mins_since_midnight <= ((12 * 60) + 47) + (73 / 2)){
        printf("Closest departure time is 12:47 PM, arriving at 3:00 PM");}
    else if (mins_since_midnight <= ((14 * 60) + (105 / 2))){
        printf("Closest departure time is 2:00 PM, arriving at 4:08 PM");}
    else if (mins_since_midnight <= ((15 * 60) + 45) + (195 / 2)){
        printf("Closest departure time is 3:45 PM, arriving at 5:55 PM");}
    else if (mins_since_midnight <= ((19 * 60) + (165 / 2))){
        printf("Closest departure time is 7:00 PM, arriving at 9:20 PM");}
    else {
        printf("Closest departure time is 9:45 PM, arriving at 11:58 PM");}

    
    return 0;
}
