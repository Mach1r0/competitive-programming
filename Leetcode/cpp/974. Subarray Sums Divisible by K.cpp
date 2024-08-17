#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> count(k, 0);
        count[0] = 1;
        int prefixSum = 0, ans = 0;
        for (auto &a : nums) {
            prefixSum = (prefixSum + a % k + k) % k;
            ans += count[prefixSum]++;
        }
        return ans;
    }
};

int main() {
    Solution solve; 
    vector<int> x {4,5,0,-2,-3,1};
    int k = 5;
    int resolve = solve.subarraysDivByK(x, k);
    cout << resolve << endl; 
    return 0;
}