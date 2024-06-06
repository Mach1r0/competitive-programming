#include<iostream>
#include<set>

using namespace std; 

int main(void) {
    int n, x, y; 
    cin >> n; 
    set<int>s; 
    for (int i = 0; i < n; i++){
        cin >> x >> y; 
        if (x == 1){
            s.insert(y);
        }else if (x == 2){
            s.erase(y); 
        }else if (x == 3){
            set<int>::iterator itr=s.find(y);
            if (itr==s.end()){
                cout << "No\n";
            }else{
                cout << "Yes\n";
            }
        }
    }
    return 0;
}