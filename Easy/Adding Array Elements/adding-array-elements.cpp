//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
         priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<n;i++){
            p.push(arr[i]);
        }
        int c=0;
        while(k>p.top()){
            int n1=p.top();
            p.pop();
            if(p.empty()) return -1;
            int n2=p.top();
            p.pop();
            p.push(n1+n2);
            c++;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends