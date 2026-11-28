class Solution {
public:
    vector<string>ans;
    void solve(int n,string s){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }
        if(s.empty() || s.back()=='1'){
            solve(n,s+'0');
        }
        solve(n,s+'1');
    }
    vector<string> validStrings(int n) {
        solve(n,"");
        return ans;
    }
};