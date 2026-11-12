class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        for(auto x:m){
            if(x.second==1 || x.second==2){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};