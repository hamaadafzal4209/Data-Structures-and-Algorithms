class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count[101] = {0};
        int good_pairs = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            good_pairs = good_pairs + count[num];
            count[num]++;
        }

        return good_pairs;
    }
};