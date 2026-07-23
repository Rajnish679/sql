class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxLen = 0;
        for(int j=0;j<nums.size(); j++){
            if(nums[j] == 1){
                count++;
            }
            else{
                maxLen = max(maxLen, count);
                count = 0;
            }
        }
        return max(maxLen, count);
    }
};