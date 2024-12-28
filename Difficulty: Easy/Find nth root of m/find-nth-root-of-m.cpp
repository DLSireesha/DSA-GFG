//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        if(n==1) return m;
        int l=1,h=m/n,r=-1;
        while(l<=h){
            int mid=(l+h)/2;
            int t=1;
            for(int i=1;i<=n;i++){
                t*=mid;
            }
            if(t==m){
                r=mid;
                break;
            }
            else if(t<m){
                l=mid+1;
            }else h=mid-1;
        }
        return r;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends