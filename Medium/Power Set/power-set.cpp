//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void fn(int ind,string& s,vector<string>& v,int n,string temp){
	    if(ind==n) return;
	    //not pick
	    fn(ind+1,s,v,n,temp);
	    temp+=s[ind];
	    v.push_back(temp);
	    fn(ind+1,s,v,n,temp);
	    temp.pop_back();
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> v;
		    int n=s.size();
		    fn(0,s,v,n,"");
		    sort(v.begin(),v.end());
		    return v;
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends