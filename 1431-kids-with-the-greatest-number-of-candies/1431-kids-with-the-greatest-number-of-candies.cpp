class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int sum=0;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>=sum){
                sum=candies[i];
            }
        }
        //int sum=extraCandies;
        vector<bool> c(candies.size());
        for(int i=0;i<candies.size();i++){
            c[i] = (candies[i]+extraCandies>=sum);
        } 
        return c;
    }
};