class Solution {
public:
    bool canAliceWin(int n) {
        int j;
       if(n<10){
        return false;
       }
       else{
           for(int i=10;i>=0;i--){
                if(n>=i){
                    n-=i;
                }
                else{
                    j=i;
                    break;
                }
           }
       }
       if(j%2==0){
            return false;
       }
       else{
        return true;
       }
    }
};