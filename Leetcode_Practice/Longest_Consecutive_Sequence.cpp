class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        vector<int>length;
        length.push_back(1);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                length.push_back(length.back()+1);
            }
            else if(nums[i]==nums[i-1]){
                length.push_back(length.back());
            }
            else{
                length.push_back(1);
            }
        }
        return *max_element(length.begin(),length.end());
    }
};
