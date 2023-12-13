#include <stdio.h>
#define MAX 1000

int main(){
    
    int arr[MAX], temp_arr[MAX], i, j, k, limit;
    printf("Enter a limit: ");
    scanf("%d", &limit);
    
    // Get input from the user 
    
    printf("Enter a inputs:\n");
    for(i=0; i<limit; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\nBefore removing duplicates: ");
    for(i=0; i<limit; i++){
        printf("%d ", arr[i]);
    }
    
    //Store elements in temprary array
    
    for(i=0; i<limit; i++){
        temp_arr[i] = arr[i];
    }
    
    // Remove duplicates 
    
    for(i=0; i<limit; i++){
        for(j=i+1; j<limit; j++){
            
            if(arr[i] == temp_arr[j]){
                for(k=j; k<limit-1; k++){
                    
                    temp_arr[k] = temp_arr[k+1];
                }
                limit--;
                j--;
            }
        }
    }
    
    // Display arrays after removed duplicates
    
    printf("\nAfter removing duplicates: ");
    for(i=0; i<limit; i++){
        printf("%d ", temp_arr[i]);
    }
}

