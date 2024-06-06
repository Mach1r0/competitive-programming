#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>::const_iterator search(const vector<int>& arr, int data){
    return lower_bound(arr.begin(), arr.end(), data);
}

int main(){
    int n, q; 
    cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> q; 
    vector<int> searcharr(q); 
    for (int i = 0; i < q; i++){
        cin >> searcharr[i];
    }
    for (int i = 0; i < q; i++){
        auto it = search(arr, searcharr[i]);
        if (it != arr.end() && *it == searcharr[i]) {
            cout << "Yes " << (it - arr.begin() + 1) << endl;
        } else {
            cout << "No " << (it - arr.begin() + 1) << endl;
        }
    }
    return 0;
}