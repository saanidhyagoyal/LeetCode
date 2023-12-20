class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int m=money-(prices[0]+prices[1]);
        m= (m>=0) ? money=m : money; 
        return money;
    }
};