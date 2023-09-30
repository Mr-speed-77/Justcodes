
#include <stdio.h>

int arith(int,int);

int main()
{
  // variable declare
    int a,b;
    printf("First number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);
    arith(a,b);

    return 0;
}

  // Arithmetic Function

int arith(int x,int y){
    printf("Sum = %d\n",x+y);
    printf("Difference = %d\n",x-y);
    printf("Product = %d\n",x*y);
    printf("Quotient = %f\n",(float)x/y);
    printf("Modulus = %d\n",x%y);
}
