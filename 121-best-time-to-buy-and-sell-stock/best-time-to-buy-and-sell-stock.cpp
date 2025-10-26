class Solution {
public:
    int maxProfit(vector<int>& p) {
        int bestbuy=p[0];
        int maxProfit = 0;
        for(int i=1 ;i<p.size();i++){
            if(p[i]>bestbuy){
                maxProfit = max(maxProfit,p[i]-bestbuy);
            }
            bestbuy=min(bestbuy,p[i]);
        }
        return maxProfit;
    }
};