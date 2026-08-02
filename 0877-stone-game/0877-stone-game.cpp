class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int a=0,b=0;
        sort(piles.begin(),piles.end());
        for(int i=piles.size()-1;i>=0;i--){
            if(i%2==0){
                b+=piles[i];
            }
            else{
                a+=piles[i];
            }
        }
        if(a>b){
            return true;
        }
        return false;
    }
};