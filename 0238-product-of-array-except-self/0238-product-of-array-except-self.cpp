// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n= nums.size();
//         int arr [n],j=n-1;
//         for (int i=0;i<n;i++){
//             if(i<j){
//                 nums[i] *= nums[j];
//                 j--;
//             }
//             else if(i==j){
//                 continue;
//             }
//             else if(i>j){
//                 nums[i] *= nums[j];
//                 j--;
//             }
//             //j++;
//         }
//         return nums;
//     }
// };
#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);  // Initialize result vector with 1

        int leftProduct = 1;
        for (int i = 0; i < n; ++i) {
            result[i] *= leftProduct;
            leftProduct *= nums[i];
            cout<<result[i]<<" ";
        }
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            result[i] *= rightProduct;
            rightProduct *= nums[i];
            cout<<result[i]<<" ";
        }
        //result[0]=rightProduct;
        return result;

    }
};
