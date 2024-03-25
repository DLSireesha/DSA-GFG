//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void f(vector<string>&s,string t,int n,int o,int z)
    {
        if(t.size()==n)
        {
            s.push_back(t);
            return;
        }
        f(s,t+"1",n,o+1,z);
        if(o>z)
        {
            f(s,t+"0",n,o,z+1);
        }
    }
vector<string> NBitBinary(int n)
{
    // Your code goes here
    vector<string>s;
    string t="";
    f(s,t,n,0,0);
    return s;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends