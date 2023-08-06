class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int prefixsum=0;
        unordered_map<int,int>prefixsummap;
        int maxlength=0;
        for (int i = 0; i < n; i++) {
            prefixsum += A[i];
            if (prefixsum == 0)
                maxlength = i + 1;
            if (prefixsummap.find(prefixsum) != prefixsummap.end())
                maxlength = max(maxlength, i - prefixsummap[prefixsum]);
            else
                prefixsummap[prefixsum] = i;
        }
        return maxlength;
    }
};
