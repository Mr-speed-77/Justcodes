#include <stdio.h>

int main(){
    
    int limit;
    // Get a limit input from user
    
    printf("Enter a limit: ");
    scanf("%d",&limit);
    printf("Natural numbers from 1 to %d:\n", limit);
    
    // Generate natural number
    
    for(int i=1;i<=limit;i++){
        printf("%d\n", i);
    }
}