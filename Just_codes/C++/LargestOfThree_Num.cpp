#include <iostream>
using namespace std;

int large_num(int x, int y, int z);

int main(){
    
    int x,y,z;
    cout << "Enter a 1st Number: ";
    cin >> x;
    cout << "Enter a 2nd Number: ";
    cin >> y;
    cout << "Enter a 3rd Number: ";
    cin >> z;
    
    int largest_number = large_num(x,y,z);
    cout << "Largest number: " << largest_number << endl;

}

int large_num(int x, int y, int z){
    
    if(x > y && x > z){
        return x;
    }
    else if(y > x && y > z){
        return y;
    }
    else{
        return z;
    }
}