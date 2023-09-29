#include <stdio.h>
#define SIZE 100

int main(){
    
    
    //Declare Array size 
    int a[SIZE],size;
    printf("Enter a array size: ");
    scanf("%d",&size);
    
    //Get Input from user
    printf("Enter an Input array Element: \n");
    
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    //Reverse Array
    printf("\nReversed array: ");
    int size_r = size-1;
    for(int i=size_r;i>=0;i--){
        printf("%d ",a[i]);
    }
}
