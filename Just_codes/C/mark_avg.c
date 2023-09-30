#include <stdio.h>

int main(){

  // Declare a variable 
    int tam,eng,math,sc,so;
    int average,total;
    float percentage;

  // Get a input from the user 
    printf("Enter marks of five subjects:\n");
    scanf("%d",&tam);
    scanf("%d",&eng);
    scanf("%d",&math);
    scanf("%d",&sc);
    scanf("%d",&so);

  // find total,average & percentage !
    total = tam + eng + math + sc + so;
    average = total/5;
    percentage = average % 100;
    printf("total = %d\naverage = %d\npercentage = %.2f",total,average,percentage);
}
