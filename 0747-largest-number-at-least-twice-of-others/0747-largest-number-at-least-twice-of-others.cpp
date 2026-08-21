class Solution {
public:
    int dominantIndex(vector<int>& nums) {
    int maxNum = nums[0];
    int maxIndex = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > maxNum) {
          maxNum = nums[i];
          maxIndex = i;   
        }
    }
        for(int i = 0; i < nums.size(); i++){
            if(i != maxIndex && maxNum < 2 * nums[i]){
                return -1;
            }
        }
        return maxIndex;
    }
};