class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long maxsum=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(nums[i]));
        }
        sort(ans.begin(),ans.end());
        int right=ans.size()-1;
        int left=0;
        while(left<right){
            maxsum+=(1LL*ans[right]*ans[right])-(1LL*ans[left]*ans[left]);
            right--;
            left++;
        }
        if(left==right){
            maxsum+=(1LL*ans[left]*ans[left]);
        }
        return maxsum;
    }
};