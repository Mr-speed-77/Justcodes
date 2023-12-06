#include <stdio.h>
#define MAX 1000

int main()
{
    
    int i, value, position, limit;
    int arr[MAX];
    
    printf("How many elements want to print: ");
    scanf("%d", &limit);

    // Get input from the user
    
    printf("Enter %d elements: \n", limit);
    for(i=0; i<limit; i++){
        
        scanf("%d", &arr[i]);
        
    }
    // Get insert Element and position
    
    printf("Enter insert Element: ");
    scanf("%d", &value);
    printf("Enter a position: ");
    scanf("%d", &position);
    
    // Insert a value of that position
    
    for(i=limit; i>position; i--){
        
        arr[i] = arr[i-1];
    }
    
    arr[position] = value;
   
    for(i=0; i<=limit; i++){
        printf("%d\n", arr[i]);
    }
}
