class Solution {
public:
    int findLow(vector<int>& nums, int target, int low, int high) {
        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                ans = mid;
                high = mid - 1;
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
    int findHigh(vector<int>& nums, int target, int low, int high) {
        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                ans = mid;
                low = mid + 1;
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int low = 0;
        int high = nums.size() - 1;
        int x = findLow(nums, target, low, high);
        int y = findHigh(nums, target, low, high);
        if (x == y and x != (-1) and y != (-1)) {
            return {x};
        }
        if (x == (-1) and y == (-1))
            return {};
        if (y - x == 1)
            return {x, y};
        vector<int> ans;
        if ((y - x) > 1) {
            for (int i = x; i <= y; i++) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};