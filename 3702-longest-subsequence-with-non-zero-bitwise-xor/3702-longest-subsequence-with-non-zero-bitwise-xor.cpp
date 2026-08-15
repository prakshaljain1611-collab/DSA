class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int length=0;
         int an=0;
          for(int i=0;i<nums.size();i++){
            an=an^nums[i];
            length++;
          }
        if(an!=0){
            return length;
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    return length-1;
                }
            }
            return 0;
        }     
    }
};