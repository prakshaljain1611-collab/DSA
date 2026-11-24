class Solution {
public:
    int maxLength(vector<int>& nums){
        int mx=     0;
        for(int i=0;i<nums.size();i++){
            long long mul=1;
            long long g=0,l=1;
            for(int j=i;j<nums.size();j++){
                mul*=nums[j];
                if(mul>25200){
                    break;
                }
                g=gcd(g,(long long)nums[j]);
                l=lcm(l,(long long)nums[j]);
                if(mul==g*l){
                    mx=max(mx,j-i+1);
                }
            }

        }
        return mx;
    }
};