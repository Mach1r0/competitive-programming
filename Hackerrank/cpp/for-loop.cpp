#include<iostream>
#include<vector>

using namespace std; 

int main(){
    vector<string> numbers = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b ; 
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (i >= 1 && i <= 9){
            cout << numbers[i-1] << "\n";
        }
        else if (i % 2 == 0){
            cout << "even" << "\n"; 
        }
        else{
            cout << "odd" << "\n"; 
        }
    }
    return 0; 
}