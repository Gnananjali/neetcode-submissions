class Solution {
public:
    int findMin(vector<int> &nums) {
        int minLen = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minLen){
                minLen = nums[i];
            }
        }
        return minLen;
    }
};
