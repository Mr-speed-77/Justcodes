#include <stdio.h>

int main(){
    
    int n1,n2,n3;
    printf("Enter three values: \n");
    scanf("%d\n%d\n%d",&n1,&n2,&n3);
    
    // Find the maximum number !
    (n1>n2 && n1>n3)?
        printf("%d is maximum number",n1)
        :(n2>n1 && n2>n3)?
            printf("%d is maximum number",n2)
                :printf("%d is maximum number",n3);    
        
}