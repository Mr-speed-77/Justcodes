
#include <stdio.h>

int main()
{
    
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    (num & 1)?
        printf("%d is Odd",num):
        printf("%d is Even",num);
}