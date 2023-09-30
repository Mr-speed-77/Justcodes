#include <stdio.h>

int main(){
    
    // Declare variables
    int a,b,c;
    printf("Enter a first angel: ");
    scanf("%d",&a);
    printf("Enter a second angel: ");
    scanf("%d",&b);
    
    // Find the third angel
    c = 180 - (a+b);
    printf("Third angel is %d\n",c);
    
}
