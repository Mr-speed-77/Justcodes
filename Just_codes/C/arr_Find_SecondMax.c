#include <stdio.h>
#define Max_size 100

int main(){
    
    int arr[Max_size], i, sec_max=0, max =0, min=1000, limit;
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
        
    }
    
    for(i=0; i<limit; i++){
        
        // Find second max value

        if(arr[i] == max)
            continue;
        else if(sec_max <= arr[i]){
            sec_max = arr[i];
        }else{
            sec_max = sec_max;
        }
        
    }
    
    
    printf("First Largestt value is: %d\n", max);
    printf("Second Largest value is: %d", sec_max);

    
    
}