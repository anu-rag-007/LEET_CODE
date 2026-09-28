class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i=0;i<prices.size();i++){
            int j = i+1;
            while(j < prices.size()){
                if(prices[j]<=prices[i]){
                    prices[i]-=prices[j];
                    break;
                }
                else{
                    j++;
                }
            }
        }
        return prices;
    }
};