class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result=0,minval=INT_MAX;
        int soldtoday=-1;
        for(int price:prices){
            minval=min(price,minval);
            soldtoday=price-minval;
            result=max(result,soldtoday);
        }
        return result;
    }
};
