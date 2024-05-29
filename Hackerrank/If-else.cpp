#include<iostream>
#include<vector>
using namespace std; 

int main(){
    vector<string> numbers = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n; 
    cin >> n; 
    if (n >= 1 && n <= 9){
        cout << numbers[n-1] << "\n";
    }
    else if(n > 9){
        cout << "Greater than 9" << "\n"; 
    }
    return 0; 
}