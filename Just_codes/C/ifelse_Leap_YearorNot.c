#include <stdio.h>

int main(){
    
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    
	// Find give year is leap year or not !

    if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ){
        printf("%d is leap  year",year);
    }
    else
        printf("%d is not a leap year",year);
        
}