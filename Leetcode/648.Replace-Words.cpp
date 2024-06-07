#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

int main(void) {
    string str; 
    string sentence; 
    stringstream ss(str);
    int a; 
    size_t pos = str.find(sentence);
    for (int i = 0; i < str.size(); i++){
        if (str == sentence){
            str.replace(pos, str.size(), sentece);
        }
    }
    cin >> str; 
    return 0;
}