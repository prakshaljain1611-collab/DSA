class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int total=0;
       for(int x:nums){
        total=total+x;
       }
       int left=0;
       int right=0;
       for(int i=0;i<nums.size();i++){
        right=total-left-nums[i];
        if(left==right){
            return i;
        }
        left=left+nums[i];
       }
       return -1;
    }
};