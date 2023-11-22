
#include <stdio.h>
#include <math.h>


int cube_num();

int main()
{
    int i,result;
    printf("Enter a number: ");
    scanf("%d", &i);
    
    // Passing arguments to the fucntion
    
    result = cube_num(i);
    printf("Cube of a number is : %d", result);
}

// Find a Cube Number Using function

int cube_num(int n){
    
    return pow(n,3);
}
