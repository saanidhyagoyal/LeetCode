class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int n1 = flowerbed.size();
        int i = 0;
        
        while(i < n1 && n > 0){
            if(flowerbed[i] == 1){
                i += 2;
                continue;
            }
            
            if (i == n1 - 1 || (i + 1 < n1 && flowerbed[i + 1] == 0)) {
                n--; 
                i += 2; 
            } 
            else {
                i++;
            }
        }
        
        return n == 0;
    }
};