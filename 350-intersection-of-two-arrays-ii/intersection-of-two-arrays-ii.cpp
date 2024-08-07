class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count_map;
        vector<int> result;

        for (size_t i = 0; i < nums1.size(); ++i) {
            count_map[nums1[i]]++;
        }

        for (size_t i = 0; i < nums2.size(); ++i) {
            if (count_map[nums2[i]] > 0) {
                result.push_back(nums2[i]);
                count_map[nums2[i]]--;
            }
        }

        return result;
    }
};