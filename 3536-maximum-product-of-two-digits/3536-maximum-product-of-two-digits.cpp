class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0){
            ans.push_back(n%10);
            n=n/10;
        }
        int s=ans.size();
        sort(ans.begin(),ans.end());
        int mul=ans[s-1]*ans[s-2];
        return mul;
    }
};