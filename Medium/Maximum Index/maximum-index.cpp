//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int i,j,ans=0;
        vector<int>left(n),right(n);
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(i=1;i<n;i++){
            left[i]=min(left[i-1],arr[i]);
            right[n-i-1]=max(right[n-i],arr[n-i-1]);
        }
        i=0,j=0;
        while(i<n && j<n){
            while(j<n && left[i]<=right[j]){
                j++;
            }
            ans=max(ans,j-i-1);
            i++;
        }
        return ans;
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends