class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstMaxIndx = -1, secondMaxIndx = -1, sz = nums.size();
        for(int indx = 0; indx < sz; indx++){
            if(firstMaxIndx == -1 && secondMaxIndx == -1){
                firstMaxIndx = secondMaxIndx = indx;
            }else if(nums[firstMaxIndx] <= nums[indx]){
                secondMaxIndx = firstMaxIndx;
                firstMaxIndx = indx;
            }else{
                if(nums[secondMaxIndx] < nums[indx] || secondMaxIndx == firstMaxIndx){
                    secondMaxIndx = indx;
                }
            }
        }
        return (nums[firstMaxIndx]-1) * (nums[secondMaxIndx]-1);
    }
};