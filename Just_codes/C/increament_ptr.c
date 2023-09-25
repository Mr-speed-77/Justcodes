#include <stdio.h>
#define size 5

int main(){
    
    int count=0;
    int a[size] = {10,20,30,40,50};
    int * ptr = &a;
    
    
    for(int i=0;i<size;i++){
        printf("a[%d] = %d\n",count,*ptr);
        count++;
        ptr++;
    }

    
}