#include<iostream>
#include<sstream>
#include<vector>
using namespace std; 

class Solution{
public: 
    string swap(string a, string b){
        char temp = a[0];  
        a[0] = b[0]; 
        b[0] = temp; 
        return a + " " + b;  
    }
};

int main(){
    string a, b; getline(cin, a); getline(cin, b); 
    cout << a.size() << " " <<  b.size() << endl;
    string c = a + b; 
    cout << c << endl;
    Solution solve; 
    string resolve = solve.swap(a, b); 
    cout << resolve << endl; 
}