class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       int m=grid.size();
       int n=grid[0].size();
       k%=(m*n);
       while(k>0){
            int last=grid[m-1][n-1];
            for(int i=m*n-1;i>0;i--){
                int cur=i/n;
                int cul=i%n;
                int prr=(i-1)/n;
                int prl=(i-1)%n;
                grid[cur][cul]=grid[prr][prl];
            }
            grid[0][0]=last;
            k--;
       }
    return grid;
    }
};