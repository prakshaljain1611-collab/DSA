class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int total=0;
            while(nums[i]>0){
                total=total+nums[i]%10;
                nums[i]=nums[i]/10;
            }
            if(total==i){
                return i;
            }
        }
        return -1;
    }
};