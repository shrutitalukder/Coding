class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int>T{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        for(int i=0;i<s.size();i++){
            if(T[s[i]]<T[s[i+1]]){
                ans-=T[s[i]];
            }
            else{
                ans+=T[s[i]];
            }
        }
        return ans;
    }
};
