//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code her
        int j=arr.size(),n=arr.size(),s1=arr[0],s2=0;
        for(int i=1;i<n;i++){
            s1+=arr[i];
        }
        for(int j=n-1;j>=0;j--){
            s2+=arr[j];
            s1-=arr[j];
            if(s1==s2){
                return true;
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends