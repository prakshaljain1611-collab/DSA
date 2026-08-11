class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int g=0;int c=0;
      int x;
      for(int i=0;i<gas.size();i++){
        g+=gas[i];
      }
      for(int i=0;i<cost.size();i++){
        c+=cost[i];
      }
      if(c>g){
        return -1;
      }
      int bal=0;
      int start=0;
      for(int i=0;i<gas.size();i++){
        bal+=gas[i]-cost[i];
         if(bal<0){
            start=i+1;
            bal=0;
         }
      }
      return start;
    }
};