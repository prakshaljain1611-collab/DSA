class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int x=0;
        for(int i=k;;i=i+k){
            x = count(nums.begin(),nums.end(),i);
           if(x==0){
            return i;
           }
        }
        return x;
    }
};