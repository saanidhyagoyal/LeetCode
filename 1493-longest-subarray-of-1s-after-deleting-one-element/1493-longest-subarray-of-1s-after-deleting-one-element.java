class Solution {
    public int longestSubarray(int[] nums) {
        int left=0,right=0,zerocount=0,al=0;
        int l=nums.length;
        for (int i=0; i<l; i++){
            if(nums[i]==0){
                zerocount++;
            }
            while(zerocount>1){
                if(nums[left]==0){
                    
                    zerocount--;
                }
                left++;
            }
            //if(nums[i]==1){
            right=i;
            al=Math.max(al,right-left);
            
        }
        return al; 
    }
}
