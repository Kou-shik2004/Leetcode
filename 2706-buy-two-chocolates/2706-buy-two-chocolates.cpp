class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int m1=200;
        int m2=200;
        for(int i=0;i<prices.size();i++){
            if(m1<prices[i] && m2<prices[i]){
                continue;
            }
            else if(m1>prices[i]){
                m2=m1;
                m1=prices[i];
            }
            else if(m2>prices[i]){
                m2=prices[i];
            }
        }
        return ((money-(m1+m2))>=0)?(money-(m1+m2)):(money);
    }
};