class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxVal = 0;
        int l=0,r=heights.size()-1;
        int res;
        while(l<r){
            res = (r-l)*min(heights[l],heights[r]);
            maxVal = max(maxVal, res);

            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxVal;
    }
};
