#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> freq(1001, 0);

        for (int n : arr1) freq[n]++;
        
        int i = 0;

        for (int n : arr2)
            while (freq[n]-- > 0)
                arr1[i++] = n;
        
        for (int n = 0; n < 1001; ++n)
            while (freq[n]-- > 0)
                arr1[i++] = n;
        
        return arr1;
    }
};