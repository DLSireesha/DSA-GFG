//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]==1) dfs(grid,i,0,n,m);
            if(grid[i][m-1]==1) dfs(grid,i,m-1,n,m);
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==1) dfs(grid,0,i,n,m);
            if(grid[n-1][i]==1) dfs(grid,n-1,i,n,m);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) ans++;
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>> &grid,int row,int col,int n,int m){
        if(row<0 || row>=n || col<0 || col>=m || grid[row][col]==0 || grid[row][col]==-1) return;
        grid[row][col]=-1;
        dfs(grid,row+1,col,n,m);
        dfs(grid,row-1,col,n,m);
        dfs(grid,row,col+1,n,m);
        dfs(grid,row,col-1,n,m);
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends