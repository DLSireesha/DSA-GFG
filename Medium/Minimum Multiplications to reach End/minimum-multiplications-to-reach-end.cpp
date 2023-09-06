//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        queue<pair<int,int>>q;
        q.push({start,0});
        vector<int> vis(100000,1e9);
        //vis[start]=1;
        int mod=1e5;
        while(!q.empty()){
            int x=q.front().first;
            int step=q.front().second;
            q.pop();
            if(x==end) return step;
            for(auto it:arr){
                int next=((x%100000)*(it%100000))%mod;
                if(step+1<vis[next]){
                    vis[next]=step+1;
                    q.push({next,step+1});
                }
                
            }
        }
        if(vis[end]==1e9) return -1;
        return vis[end];
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends