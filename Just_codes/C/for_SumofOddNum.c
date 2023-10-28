#include <stdio.h> 

int main(){
    
    int n, count = 0;
    printf("Enter a limit: ");
    scanf("%d",&n);
    
    // Find Sum of Even Numbers 
    
    for(int i=1;i<=n;i++){
        
        if(i%2 !=0){
            count += i;
        }
    }
    printf("Sum of even number between 2 - %d = %d", n, count);
    
}