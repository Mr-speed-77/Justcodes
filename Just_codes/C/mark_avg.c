#include <stdio.h>

int main(){
    
    int tam,eng,math,sc,so;
    int average,total;
    float percentage;
    
    printf("Enter marks of five subjects:\n");
    scanf("%d",&tam);
    scanf("%d",&eng);
    scanf("%d",&math);
    scanf("%d",&sc);
    scanf("%d",&so);
    total = tam + eng + math + sc + so;
    average = total/5;
    percentage = average % 100;
    printf("total = %d\naverage = %d\npercentage = %.2f",total,average,percentage);
}
