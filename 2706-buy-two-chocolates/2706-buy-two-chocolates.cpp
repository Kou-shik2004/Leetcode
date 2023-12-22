class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minp=200;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                minp=min(minp,prices[i]+prices[j]);
            }
        }
        int rem=money-minp;
        if(rem>=0){
            return rem;
        }
        else{
            return money;
        }
    }
};