#include <stdio.h>

int main(){
    
    int cost,sell,profit,lose;
    printf("Input cose prize: ");
    scanf("%d",&cost);
    printf("Input selling prize: ");
    scanf("%d",&sell);
    
    // Find profit or not 
    
    if(sell > cost){
        profit = sell - cost;
        printf("profit: %d",profit);
    }
    else if(sell < cost){
        lose = cost - sell;
        printf("Lose: %d",lose);
    }
    else    
        printf("No profit and No lose !");
}