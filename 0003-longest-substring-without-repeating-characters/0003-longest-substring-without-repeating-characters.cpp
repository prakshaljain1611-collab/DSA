class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>se;
        int right=0;
        int left=0;
        int ans=0;
       while(right<s.size()){
        if(se.find(s[right])==se.end()){
            se.insert(s[right]);
            ans=max(ans,right-left+1);
            right++;
        }
        else{
            se.erase(s[left]);
            left++;
        }
       }
       return ans;
    }
};