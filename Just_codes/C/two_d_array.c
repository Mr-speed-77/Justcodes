#include <stdio.h>


int main(){
    

    int i,row,coloum;
    printf("Enter the row and coloum: ");
    scanf("%d %d",&row,&coloum);
    
    int matrix[row][coloum];
    printf("Enter a values for %dX%d Matrix: \n",row,coloum);
   
    for(i=0;i<row;i++){
        
        for(int j=0;j<coloum;j++){
            printf("Enter the value for matrix[%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);   
        }
        printf("\n");
    }
    printf("\nElemnts in matrix:\n");
    
    for(i=0;i<row;i++){
        
        for(int j=0;j<coloum;j++){
            
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}


    

    


