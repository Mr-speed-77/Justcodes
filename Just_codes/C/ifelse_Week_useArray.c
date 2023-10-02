#include "stdio.h"

int main(){
    
    const char *week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "\0"};
    
    int i;
    printf("Enter a week (1-7): ");
    scanf("%d",&i);
    
	// given week number  to display the week using if else and array
    if(i>=0 && i<=7){
        printf("%s", week[i-1]);
    }
    else
        printf("Invalid Input, try again (1-7)");
}