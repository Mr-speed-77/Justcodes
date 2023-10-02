#include <stdio.h>

int main(){
    
    
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    
    // Finding leap year or not using ternary operator !
    printf("%d is %s year",year,((year%4 == 0 && year%100 != 0) || year%400 == 0)? 
        "Leap year":
        "Not a leap year");
}
