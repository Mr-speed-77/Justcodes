#include <stdio.h>

int main(){
    
    // Declare a Varialbe !
    double celsius, fahrenheit;
    printf("Enter a temprature in celsius: ");
    scanf("%lf",&celsius);
    
    // Celcius Covert to Fahrenheit 
    fahrenheit = (celsius*9/5) + 32;
    printf("Temprature in fahrenheit: %.1f F\n",fahrenheit);
    
}
