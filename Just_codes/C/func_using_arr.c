#include <stdio.h>

int func(int a[], int n){
    
    // Print the Given Elements
    printf("\nGiven Elements:\n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}

int main(){
    
    int num[5];
    //Input the Elements
    printf("Enter a 5 elements:\n");
    for(int i =0; i<5; i++){
        scanf("%d", &num[i]);
    }
    func(num, 5); // Call Function
    return 0;
}
