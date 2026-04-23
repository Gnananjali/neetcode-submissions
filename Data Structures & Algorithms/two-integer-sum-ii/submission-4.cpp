class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        
        int left=0,right=num.size()-1;

        while(left<right){
            if(num[left]+num[right] < target) left++;
            else if(num[left]+num[right] > target) right--;
            else return{left+1,right+1};
        }
        return {};
    }
};
