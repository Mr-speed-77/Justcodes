
#include <stdio.h>

int add(int,int);
int sub(int,int);

int main()
{
    int sum,diff;
    int (* arith)(int,int);
    arith = add;
    sum=arith(20,10);
    
    arith = sub;
    diff=arith(20,10);
    
    printf("sum = %d\n",sum);
    printf("diff = %d\n",diff);
    

    return 0;
}


int add(int a,int b){
    
    return (a+b);
}


int sub(int a,int b){
    
    return (a-b);
}



