class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int maxVal = 0;
        for(int right = 1;right<prices.size();right++){
            if(prices[right]<prices[left]){
                left = right;
            }else{
                maxVal = max(maxVal, prices[right]-prices[left]);
            }
        }
        return maxVal;
    }
};
