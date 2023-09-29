
#include <stdio.h>
#define Size 100

int main()
{
    int arr_1[Size],arr_2[Size],arr_temp[Size];
    int *ptr;
    int size_1,size_2;
    ptr = arr_1;
    int *p = arr_2;
    printf("Enter arr_1 size: ");
    scanf("%d",&size_1);
    printf("Enter arr_2 size: ");
    scanf("%d",&size_2);
    
    // Input from the user
    printf("Input first element: \n");
    for(int i=0;i<size_1;i++){
        scanf("%d",&arr_1[i]);
        
    }
    
    // Input from the user
    printf("Input second  element: \n");
    for(int i=0;i<size_2;i++){
        scanf("%d",&arr_2[i]);

    }
    
    // Before Swapping
    printf("first element Before Swapping: ");
    for(int i=0;i<size_1;i++){
        printf("%d ",arr_1[i]);
    }
    printf("\n");
    printf("second element After Swapping: ");
    for(int i=0;i<size_2;i++){
        printf("%d ",arr_2[i]);
        
    }
    
    //temprory array
    printf("\n");
    for(int i=0;i<size_2;i++){
        arr_temp[i] = p[i];
        }
        
    // assign arr_1 value for arr_2
   printf("\n");
    for(int i=0;i<size_1;i++){
        arr_2[i] = ptr[i];
        }
    // assign arr_2 value for arr_1
    
    printf("\n");
    for(int i=0;i<size_2;i++){
        arr_1[i] = arr_temp[i];
        }
    
    // After Swapping 
    printf("\n");
    printf("first element After Swapping: ");
    for(int i=0;i<size_2;i++){
        printf("%d ",arr_1[i]);
        }
     printf("\n");
     printf("second element After Swapping: ");
    for(int i=0;i<size_1;i++){
        printf("%d ",arr_2[i]);
        }
    
    
    

    return 0;
}
