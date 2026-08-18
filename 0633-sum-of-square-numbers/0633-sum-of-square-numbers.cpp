class Solution {
public:
    bool judgeSquareSum(int c) {
         long long i=0;
         while(i*i<=c){
            long long x=c-(i*i);
            long long j=sqrt(x);
            if(j*j==x){
                return true;
            }
            i++;
         }
         return false;
    }
};