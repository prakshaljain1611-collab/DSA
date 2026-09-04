class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i=0;
        while(i<nums.size()){
            int x=*max_element(nums.begin(),nums.begin()+i+1);
            int y=*min_element(nums.begin()+i,nums.end());
            if(x-y<=k){
                return i;
            }
            i++;
        }
        return -1;
    }
};