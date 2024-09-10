#include <iostream>
using namespace std;

int main(){
    
    int num1, num2;
    cin >> num1 >> num2;
    
    cout << "sum: " << num1 + num2;
    cout << "\nDifference: " << num1 - num2;
    cout << "\nProduct: " << num1 * num2;
    
    if(num2 != 0){
    cout << "\nQuorient: " << num1 / num2;
    }
    else {
        cout << "\nDivision by zero is not allowed!";
    }
}