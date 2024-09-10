#include <iostream>
#include <string>
using namespace std;

int main(){
 
    string str, rev_str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    int str_len = str.length();

    
    for(int i=str_len-1; i>=0;i--){
       
        rev_str+=str[i];
    }
    cout << endl;
    cout << "Reverse string: " << rev_str;
    
    
    
}
