class Solution {
public:
    bool sumGame(string num) {
        int sumalice=0,sumbob=0;
        int count=0;
        int aq=0,bq=0;
        for(int i=0;i<num.size();i++){
            if(num[i]=='?'){
                count++;
            }
            if(i<num.size()/2){
                if(isdigit(num[i])){
                    sumalice+=num[i]-'0';
                }
                else{
                    aq++;
                }
            }
            if(i>=num.size()/2){
                if(isdigit(num[i])){
                    sumbob+=num[i]-'0';
                }
                else{
                    bq++;
                }
            }
        }
        if(count%2==1){
            return true;
        }
        if(2*(sumalice-sumbob)!=9*(bq-aq)){
            return true;
        }
        return false;
    }
};