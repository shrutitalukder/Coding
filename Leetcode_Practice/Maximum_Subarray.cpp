class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curmax=0,maxnow=INT_MIN;
        for(auto c:nums){
            curmax=max(c,curmax+c);
            maxnow=max(maxnow,curmax);
        }
        return maxnow;
    }
};
