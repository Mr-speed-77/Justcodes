#include <stdio.h>



int main(){

    int a[10];
    int n;
    printf("Input size: ");
    scanf("%d",&n);
    printf("Input elements: ");
    for(int i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    }
    
    printf("Output: ");
    
    for(int i=0;i<n;i++){
        
        printf("%d,",a[i]);
    }

    
}

