#include <stdio.h>

int main(){
    
    int a[10];
    int n,i,sum=0;
    printf("How many elements you want give: ");
    scanf("%d",&n);
    
    printf("Enter Inputs:\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++){
        sum = sum+a[i];
        
    }
    printf("Sum of Element value is: %d",sum);
    
}