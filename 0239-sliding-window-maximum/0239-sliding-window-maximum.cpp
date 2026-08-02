class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>d1;
        for(int i=0;i<k;i++){
            while(d1.size()>0 && nums[d1.back()]<=nums[i]){
                d1.pop_back();
            }
            d1.push_back(i);
        }
       for(int i=k;i<nums.size();i++){
         ans.push_back(nums[d1.front()]);
         while(d1.size()>0 && d1.front()<=i-k){
            d1.pop_front();
         }
         while(d1.size()>0 && nums[d1.back()]<=nums[i]){
            d1.pop_back();
         }
         d1.push_back(i);
       }
       ans.push_back(nums[d1.front()]);
       return ans;
    }
};