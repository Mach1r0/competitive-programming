#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(void){
    int n, x, z; 
    string y; 
    cin >> n; 
    map<string,int>m;
    for (int i = 0; i < n; i++){
        cin  >> x >> y; 
        if (x == 1 ){
            cin >> z; 
            m[y] += z;  
        } else if ( x == 2){
            m.erase(y);
        }else if (x == 3){
            map<string,int>::iterator itr = m.find(y); 
            if (itr != m.end())
                cout << itr->second << "\n";
            else
                cout << "0\n";
        }
    }
    return 0;
}