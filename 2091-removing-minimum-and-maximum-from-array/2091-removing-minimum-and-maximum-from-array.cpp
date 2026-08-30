class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mx=0,mn=0;
        int n=nums.size();
        int cost=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>nums[mx]){
              mx=i;
           }
            if(nums[i]<nums[mn]){
                mn=i;
            }
        }
        int left=min(mx,mn);
        int right=max(mx,mn);
       int a=right+1;
       int b=n-left;
       int c=left+1+n-right;
       return min({a,b,c});
    }
};