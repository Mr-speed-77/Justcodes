
#include <stdio.h>

int main()
{
  //Declar variables
    int p;
    float t,r,si;
    printf("Enter principle: ");
    scanf("%d",&p);
    printf("Enter time: ");
    scanf("%f",&t);
    printf("Enter rate: ");
    scanf("%f",&r); 

  // Simple Interest
    si = (p*t*r)/100;
    printf("Simple interest: %.2f",si);
}
