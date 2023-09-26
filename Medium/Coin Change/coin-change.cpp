//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int msum(int index,int coins[], int N, int sum,vector<vector<long long int>>& dp){
        if(sum==0) return 1;
        if(sum<0 || index>=N) return 0;
        if(dp[index][sum]!=-1) return dp[index][sum];
        long long take=msum(index,coins,N,sum-coins[index],dp);
        long long nottake=msum(index+1,coins,N,sum,dp);
        return dp[index][sum]=take+nottake;
    }
    long long int count(int coins[], int N, int sum) {

        // code here.
        vector<vector<long long int>> dp(N+1,vector<long long int>(sum+1,-1));
        return msum(0,coins,N,sum,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends