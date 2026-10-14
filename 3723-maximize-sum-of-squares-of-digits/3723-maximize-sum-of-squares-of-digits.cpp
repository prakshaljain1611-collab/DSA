class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int i=0;
        string ans="";
        if(sum>9*num){
            return "";
        }
        while(i<num){
            if(sum>=9){
                ans+='9';
                sum-=9;
            }
            else{
                ans+=char('0'+sum);
                sum=0;
            }
            i++;
        }
        return ans;
    }
};