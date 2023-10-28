#include <stdio.h> 

int main(){
    
    int n;
    printf("Enter a limit: ");
    scanf("%d",&n);
    
    // Generate Odd numbers 
    
    for(int i=1;i<=n;i++){
        
        if(i%2 !=0){
            printf("%d\n",i);
        }
    }
    
}