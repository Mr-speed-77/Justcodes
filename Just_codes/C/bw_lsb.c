
#include <stdio.h>

int main()
{
    
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int lsb = num & 1;
    if(lsb == 1)
        printf("Least Significant Bit of %d is set (1).",num);
    else
        printf("Least Significant Bit of 11 is set (0).");
    
    return 0;
}
