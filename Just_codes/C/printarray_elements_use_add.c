#include <stdio.h>
#define size 5

int main(){
    
    int a[size] = {10,20,30,40,50};
    int count=0;
    int *ptr;
    ptr=&a;
    
    while(count<size){
        
        printf("a[%d] = %d\n",count,*(ptr+count));
        count++;
    }
}