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

    
    printf("Enter delete Element: ");
    scanf("%d", &value);
    printf("Enter a position: ");
    scanf("%d", &position);
    
    // Delete element of that position
    
    for(i=position; i<limit-1; i++){
        
        arr[i] = arr[i+1];
        printf("arr[%d] = %d\narr[%d] = %d\n", i, arr[i], i+1, arr[i+1]);
    }
    
    limit--;
    
    for(i=0; i<limit; i++){
        printf("%d\n", arr[i]);
    }
}
