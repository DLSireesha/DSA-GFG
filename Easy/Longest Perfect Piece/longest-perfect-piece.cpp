//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int n) {
        int ans=0;
        int l=0,r=0;
        multiset<int>ms;
        while(r<n){
        ms.insert(arr[r++]);
        while(*(ms.rbegin())-*(ms.begin())>1){
            ms.erase(ms.find(arr[l++]));
        }
        ans=max(ans,(int)ms.size());
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends