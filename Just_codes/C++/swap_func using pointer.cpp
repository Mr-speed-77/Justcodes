#include <iostream>
using namespace std;

void swap(int *n1, int *n2);

int main(){
    
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    
    swap(&x, &y);
    cout << "After swapping x = " << x <<" y = " << y;
    return 0;
    
}

void swap(int *n1, int *n2){
    
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}