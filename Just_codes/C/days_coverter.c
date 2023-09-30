#include <stdio.h>

int main(){
    
     // Declare a variables
    int day,week,year;
    int year_r,week_r;
    printf("Enter a days: ");
    scanf("%d",&day);
    
    // Covert days to year
    year = day / 365;
    year_r = day % 365;
    
    // Remider weeks
    week = year_r / 7;
    week_r = year_r % 7;
    
    // Reminder days
    day = week_r / 1;
    
    // Days convert to years,weeks & days
    
    printf("%d year/s %d week/s %d day/s",year,week,day);
}
