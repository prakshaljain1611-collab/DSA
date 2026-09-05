class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        for(int i=0;i<s.size();i++){
            int max=s[i]-'0';
            int j=i;
           for(int k=i+1;k<s.size();k++){
                if(s[k]-'0'>=max){
                    max=s[k]-'0';
                    j=k;
                }
           }
           if(max>s[i]-'0'){
            swap(s[i],s[j]);
            break;
           }
        }
        return stoi(s);
    }
};