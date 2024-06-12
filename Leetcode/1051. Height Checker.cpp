#include<iostream>
#include<vector>
#include

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> counts(101, 0);
        for (int height : heights) {
            counts[height]++;
        }
        
        int result = 0;
        int currentHeight = 0;

        for (int i = 0; i < heights.size(); i++) {
            while (counts[currentHeight] == 0) {
                currentHeight++;
            }
            if (currentHeight != heights[i]) {
                result++;
            }
            counts[currentHeight]--;
        }
        
        return result;
    }
};