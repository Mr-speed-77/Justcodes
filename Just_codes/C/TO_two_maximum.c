#include <stdio.h>

int main(){
    
    int n1,n2;
    printf("Enter two values: \n");
    scanf("%d\n%d",&n1,&n2);
    
    // Find the maximum number !
    (n1>n2)?
        printf("%d is maximum number",n1)
        :printf("%d is maximum number",n2);
        
}