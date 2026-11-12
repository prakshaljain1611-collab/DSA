class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int left=0,right=1;
        int ans=1;
        int dir=0;
        while(right<nums.size()){
            if(nums[right]>nums[right-1]){
                if(dir==-1){
                    left=right-1;
                }
                dir=1;
            }
            else if(nums[right]<nums[right-1]){
                if(dir==1){
                    left=right-1;
                }
                dir=-1;
            }
            else{
                left=right;
                dir=0;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};