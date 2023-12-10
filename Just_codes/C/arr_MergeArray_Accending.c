#include <stdio.h>
#define MAX 1000

int main(){
    
    // Intialize variable
    int i, arr1[MAX], arr2[MAX], arr3[MAX], limit1, limit2, limit3;
    
    // Get input from user for first array
    
    printf("Enter a limit for 1st array: ");
    scanf("%d", &limit1);
    printf("Enter a first array input:\n");
    for(i=0; i<limit1; i++){
        scanf("%d", &arr1[i]);
    }
    
    // Get input from user for second array
    
    printf("Enter a limit for 2nd array: ");
    scanf("%d", &limit2);
    printf("Enter a second array input:\n");
    for(i=0; i<limit2; i++){
        scanf("%d", &arr2[i]);
    }
    
    // Copy arrays in single array
   
    for(i=0; i<limit1; i++){
        
        arr3[i] = arr1[i];
    }
    
    for(i=0; i<limit2; i++){
        arr3[limit1+i] = arr2[i];
    }
    
    limit3 = limit1+limit2;
    printf("\n");
    
    // Sort element in accending order
    
    for(int j=0; j<limit3; j++){
        for(i=0; i<limit3-j-1; i++){
        
            if(arr3[i]> arr3[i+1]){
            
                int temp = arr3[i];
                arr3[i] = arr3[i + 1];
                arr3[i + 1] = temp;
            }
        }
    }
    
    // Display that sorting elements
    
    printf("Array_3: ");
    for(i=0; i<limit3; i++){
        printf("%d ",arr3[i]);
    }
    }