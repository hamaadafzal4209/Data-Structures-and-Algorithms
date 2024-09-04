/**
 * @param {number[]} nums
 * @return {number}
 */
var findLengthOfLCIS = function (nums) {
    let maxLength = 1;
    let currentLength = 1;

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] > nums[i - 1]) {
            currentLength++;
            maxLength = Math.max(maxLength, currentLength);
        }
        else {
            currentLength = 1;
        }
    }

    return maxLength;

};