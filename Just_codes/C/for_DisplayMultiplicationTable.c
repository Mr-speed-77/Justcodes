#include <stdio.h>

int main(){
    
    int table;
    printf("Enter a table: ");
    scanf("%d", &table);
    
    // Generate Multiplication table
    
    for(int i =1; i<=10; i++){
        printf("%d * %d = %d\n", table, i, (i*table));
    }
    
}

