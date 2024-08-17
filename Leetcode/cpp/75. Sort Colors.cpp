#include<iostream>
#include<vector>
using namespace std; 

class Solution {
public:
    void sortColors(vector<int>& nums){
        vector<int> freq(3, 0);
        for (int n : nums) freq[n]++;
        int j = 0; 
        for (int i = 0; i < freq.size(); i++){
            while (freq[i]-- > 0){
                nums[j++] = i; 
            }
        }
}};