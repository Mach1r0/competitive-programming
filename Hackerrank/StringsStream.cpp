#include<iostream>
#include<vector>
#include<algorithm>
#include <sstream>
using namespace std; 

vector<int> parseInts(string str){
    stringstream ss(str);
    char ch; 
    int a;
    vector<int> result;

    while(ss >> a) {
        result.push_back(a);
        ss >> ch;
    }

    return result; 
}
void solve(){
    string str; 
    getline(cin, str); 
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++){
        cout << integers[i] << "\n";
    }
}

int main(void) {
    solve(); 
    return 0; 
}