//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum=0,a=0;
        unordered_map<int,int> m;
        m[0]=-1;
        for(int i=0;i<N;i++){
            sum+=A[i];
            int next=sum-K;
            if(m.find(next)!=m.end()){
                a=max(a,i-m[next]);
            }
            if(m.find(sum)==m.end()){
                m[sum]=i;
            }
        }
        return a;
        
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends