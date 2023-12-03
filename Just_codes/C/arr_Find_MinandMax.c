#include <stdio.h>
#define Max_size 100

int main(){
    
    int arr[Max_size], i, max =0, min=1000, limit;
    printf("Enter a size: ");
    scanf("%d", &limit);
    
    printf("Input Elements:\n");
    for(i=0;i<limit;i++){
        
        // Get the input from the user 
        scanf("%d", &arr[i]);
        
        // Find max value
        if (max <= arr[i]){
            max = arr[i];
        }else{
            max = max;
        }
        
        // Find mini value
        if (min >= arr[i]){
            min = arr[i];
        }else{
            min = min;
        }
    }
    
    printf("Max: %d\nMin: %d\n", max, min);
    
    
}