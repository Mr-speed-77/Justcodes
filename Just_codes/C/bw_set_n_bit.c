
#include <stdio.h>

int main()
{
    int num,n;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    printf("Enter a nth bit: ");
    scanf("%d",&n);
    
    num = (num >> n) | 1;
    printf("%d",num);

    return 0;
}
