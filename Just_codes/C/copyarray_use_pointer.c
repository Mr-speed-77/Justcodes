#include <stdio.h>

#define Size 100

int main(){
    
    int a[Size];
    int size;
    
     int *ptr = &a[0];
     int b[Size];
    
    printf("Input Array size: ");
    scanf("%d",&size);
    
    printf("Input array_1 elemnts: ");
    for(int i=0;i<size;i++){
        
        scanf("%d",&a[i]);
    }
    
    printf("Array_1: ");
    for(int i=0;i<size;i++){
        printf("%d ",*(ptr+i));
        }
    printf("\n");
    
    printf("Array_2: ");
    for(int i=0;i<size;i++){
        b[i]=ptr[i];
    }
    
    for(int i=0;i<size;i++){
    printf("%d ",b[i]);
    
    }
}