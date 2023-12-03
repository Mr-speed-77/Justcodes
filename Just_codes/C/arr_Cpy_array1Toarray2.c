#include <stdio.h>
#define Max_size 100

int main(){
    
    int arr_1[Max_size], i, limit, arr_2[Max_size];
    printf("Enter a size: ");
    scanf("%d", &limit);
    
    printf("Input Elements:\n");
    for(i=0;i<limit;i++){
        
        // Get the input from the user 
        scanf("%d", &arr_1[i]);
        arr_2[i] = arr_1[i];
        
    }

    printf("arr_1: ");
    for(i=0;i<limit;i++){
        
        printf("%d ", arr_1[i]);
    }
    
    printf("\narr_2: ");
    
    for(i=0;i<limit;i++){
        
        printf("%d ", arr_2[i]);
    }
    
    
   
}