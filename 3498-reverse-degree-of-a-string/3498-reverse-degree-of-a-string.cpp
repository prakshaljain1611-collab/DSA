class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int x;
        for(int i=0;i<s.size();i++){
             x= 123-s[i];
            sum+=x*(i+1);
        }
        return sum;
    }
};