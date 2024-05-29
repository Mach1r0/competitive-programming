#include<iostream>
#include<vector>

using namespace std; 

int solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d; 
    vector<int> numbers = {a, b, c, d};
    int maior = numbers[0]; 
    for (int i = 1;  i < 4; i++){ 
        if (maior < numbers[i]){
            maior = numbers[i]; 
        }
    }
    return maior;
}

int main(){
    cout << solve() << "\n"; 
    return 0;
}