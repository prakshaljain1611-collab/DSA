class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i>=n;i++){
            int mul=1;
            int a=i;
            while(a>0){
                mul*=(a%10);
                a=a/10;
            }
            if(mul%t==0){
                return i;
            } 
        }
        return -1;
    }
};