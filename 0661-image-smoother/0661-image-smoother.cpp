/*class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        int a,b,c,d;
        vector<vector<int>> result;
        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j>0){
                    a=img[i][j+1];
                    b=img[i+1][j+1];
                    c=img[i+1][j];
                }
                else if (j==0 && i>0){
                    a=img[i-1][j];
                    b=img[i-1][j+1];
                    c=img[i][j+1];
                    d=img[i+1][j+1];
                    e=img[i+1][j];
                }
                
            }
        }
        
    }
};*/

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> result(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int count = 0;
                int sum = 0;

                for (int r = i - 1; r <= i + 1; r++) {
                    for (int c = j - 1; c <= j + 1; c++) {
                        if (r >= 0 && r < m && c >= 0 && c < n) {
                            sum += img[r][c];
                            count++;
                        }
                    }
                }

                result[i][j] = sum / count;
            }
        }

        return result;
    }
};