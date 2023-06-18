//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
    // code here
    int lo=1,hi=N,cnt=0;
    while(lo<=hi){
        if((cnt++/K)%2 == 0)lo++;
        else hi--;
    }
    return ((cnt-1)/K)%2 == 0 ? lo-1 : hi+1;
}
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends