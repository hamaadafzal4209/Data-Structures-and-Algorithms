class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<vector<int>> answer;
        int i = 0, j = 0;
        vector<int> ans0, ans1;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                if (i == 0 || nums1[i] != nums1[i - 1]) {
                    if (ans0.empty() || ans0.back() != nums1[i])
                        ans0.push_back(nums1[i]);
                }
                i++;
            } else {
                if (j == 0 || nums2[j] != nums2[j - 1]) {
                    if (ans1.empty() || ans1.back() != nums2[j])
                        ans1.push_back(nums2[j]);
                }
                j++;
            }
        }
        while (i < nums1.size()) {
            if (i == 0 || nums1[i] != nums1[i - 1]) {
                if (ans0.empty() || ans0.back() != nums1[i])
                    ans0.push_back(nums1[i]);
            }
            i++;
        }
        while (j < nums2.size()) {
            if (j == 0 || nums2[j] != nums2[j - 1]) {
                if (ans1.empty() || ans1.back() != nums2[j])
                    ans1.push_back(nums2[j]);
            }
            j++;
        }
        answer.push_back(ans0);
        answer.push_back(ans1);
        return answer;
    }
};