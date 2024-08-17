#include<iostream>
#include<cmath>

using namespace std; 

void solve(int *a, int *b){
    int sum = *a + *b;
    int difference = abs(*a - *b);
    *a = sum;
    *b = difference;
}

int main(){
    int a, b; 
    cin >> a >> b;
    solve(&a, &b); 
    cout << a << "\n" << b << "\n";
    return 0;
}