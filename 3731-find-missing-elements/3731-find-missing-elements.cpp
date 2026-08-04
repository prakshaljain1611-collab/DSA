class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int x:nums){
            m[x]++;
        }
        for(int i=nums[0];i<=nums[nums.size()-1];i++){
            if(m.find(i)==m.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};