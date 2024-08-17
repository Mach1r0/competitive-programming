#include <vector>
#include <algorithm>

class Solution {
public:
    long long maxPoints(std::vector<std::vector<int>>& points) {
        int m = points.size();
        int n = points[0].size();
        std::vector<long long> prev(n, 0);
        std::vector<long long> curr(n, 0);

        // Initialize prev with the first row of points
        for (int i = 0; i < n; ++i) {
            prev[i] = points[0][i];
        }

        // Iterate through each row starting from the second row
        for (int i = 1; i < m; ++i) {
            // Left to right pass
            curr[0] = prev[0];
            for (int j = 1; j < n; ++j) {
                curr[j] = std::max(prev[j], curr[j - 1] - 1);
            }

            // Right to left pass
            for (int j = n - 2; j >= 0; --j) {
                curr[j] = std::max(curr[j], curr[j + 1] - 1);
            }

            // Add the current row points
            for (int j = 0; j < n; ++j) {
                curr[j] += points[i][j];
            }

            // Update prev to be curr for the next iteration
            prev = curr;
        }

        // Return the maximum value in prev
        return *std::max_element(prev.begin(), prev.end());
    }
};
