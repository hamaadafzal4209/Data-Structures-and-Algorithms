class Solution {
public:
    int heightChecker(std::vector<int>& heights) {
        vector<int> expected = heights;

        sort(heights.begin(), heights.end());

        int count = 0;

        for (size_t i = 0; i < heights.size(); ++i) {
            if (heights[i] != expected[i]) {
                ++count;
            }
        }

        return count;
    }
};