class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>q;
        for(int i=1;i<=n;i++){
            q.push_back(i);
        }
        int i=0;
        while(q.size()>1){
            i=(i+k-1)%q.size();
            q.erase(q.begin()+i);
        }
        return q[0];
    }
};