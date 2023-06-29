//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
private:
    bool recursion(int N){
        if(N==1 || N==7) return true;
        if(N==2 || N==3 || N==4 || N==5 || N==6 || N==8 || N==9) return false;
        int sum=0;
        while(N){
            int r=N%10;
            sum=sum+(r*r);
            N=N/10;
        }
        return recursion(sum);
    }
public:
    int nextHappy(int N){
        while(true){
            N++;
            if(recursion(N)) return N;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends