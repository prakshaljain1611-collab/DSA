class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
        string ans="";
         int sum=0;
         int j=0;
        for(int i=0;i<s.size();i++){
            sum+=(s[i]-'0');
            j++;
            if(j==k){
                ans+=to_string(sum);
                sum=0;
                j=0;
            }
        }
        if(j>0){
            ans+=to_string(sum);
        }
        s=ans;
        }
        return s;
    }
};