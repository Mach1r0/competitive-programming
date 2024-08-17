#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

int main(){
    string str; getline(cin, str);
    int score = 0;
    for (int i = 0; i < str.size() - 1; i++){
        score += abs((int)str[i] - (int)str[i + 1]);
    }
    cout << score << endl;
    return 0;
}