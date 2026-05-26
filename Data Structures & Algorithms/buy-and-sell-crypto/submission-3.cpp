class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    int l = 0;
    int r = 1;
    int max_prof = 0;
    while(r < prices.size()){
        if(max_prof < prices[r] - prices[l]){
            max_prof = prices[r] - prices[l];
        }
        if(prices[l] > prices[r]){
            l = r;
        }
        r++;
    }
    return max_prof;
    }
};
