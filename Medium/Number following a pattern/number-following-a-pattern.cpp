//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int> s;
        int n=1;
        string ans;
        for(int i=0;i<S.length();i++){
            s.push(n++);
            if(S[i]=='I'){
            while(!s.empty()){
                ans=ans+to_string(s.top());;
                s.pop();
            }}
        }
        s.push(n++);
        while(!s.empty()){
            ans+=to_string(s.top());
            s.pop();
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends