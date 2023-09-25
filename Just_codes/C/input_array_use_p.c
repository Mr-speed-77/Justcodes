
      // Get input from the user to display Array Elements  Using Pointers


#include <stdio.h>
#define size 10

int main(){
    
    int a[size];
    int *ptr,i;
    ptr=a;
    
    printf("Enter %d array elements: \n",size);
    while(ptr<&a[size]){
        
        scanf("%d",ptr);
        ptr++;
    }
    ptr=a;
    
    printf("Given Array Elements: \n");
    for(i=0;i<size;i++){
        
        printf("a[%d] = %d\n",i,*(ptr+i));
    }
    
}