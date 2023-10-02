#include <stdio.h>

int main(){
    
    int first,second,third;
    printf("Enter the first & second & thrid angel: \n");
    scanf("%d\n%d\n%d",&first,&second,&third);
    
 	// Check whether triangle is valid or not by given the angel
 
    if (first + second + third == 180 && first > 0 && second > 0 && third > 0)
        printf("The triangle is valid");
    else
        printf("The triangle is Invalid");
}