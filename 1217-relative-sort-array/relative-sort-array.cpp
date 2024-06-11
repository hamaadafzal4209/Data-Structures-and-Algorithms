class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> freq(1001, 0);
        for (int i = 0; i < arr1.size(); ++i) {
            freq[arr1[i]]++;
        }

        vector<int> result;
        for (int i = 0; i < arr2.size(); ++i) {
            int num = arr2[i];
            result.insert(result.end(), freq[num], num);
            freq[num] = 0;
        }

        for (int i = 0; i < freq.size(); ++i) {
            if (freq[i] > 0) {
                result.insert(result.end(), freq[i], i);
            }
        }

        return result;
    }
};