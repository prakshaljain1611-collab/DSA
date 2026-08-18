class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int r=0;
        int x=n;
        while(x>0){
            r=r*10+x%10;
            x/=10;
        }
        int z=min(n,r);
        int y=max(n,r);
        int sum=0;
        for(int j=z;j<=y;j++){
            bool prime=true;
        for(int i=2;i<=j/2;i++){
            if(j%i==0){
                prime=false;
                break;
            }
        }
        if(prime){
            sum+=j;
        }
        }
        if(z<2){
            return sum-1;
        }
        return sum;
    }
};