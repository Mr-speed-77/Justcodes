#include  <stdio.h>

int main(){
    
    
    int day;
    printf("Input week number(1-7): ");
    scanf("%d",&day);
    
    // Display the day using week number
    
    switch(day){
        
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wendnesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day, Try again (1-7) ");
            
    }
    
    
    
    
    
    
    
}
