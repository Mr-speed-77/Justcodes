#include <stdio.h>

int main(){
    
    // Get input month number from the user !
    int month;
    printf("Enter a month number: ");
    scanf("%d",&month);
    
    // Display the days using the month number !
    switch(month){
        
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;
        case 2:
            printf("28/29 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;
        default:
            printf("Invalid input ! please enter (1-12)");
    }
}
