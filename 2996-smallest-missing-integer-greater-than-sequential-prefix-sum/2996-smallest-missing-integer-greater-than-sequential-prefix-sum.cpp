class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>m;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i==0 || nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        for(int x:nums){
            m[x]++;
        }
        for(int i=sum; ;i++){
            if(m.find(i)==m.end()){
                return i;
            }
        }
        return -1;
    }
};