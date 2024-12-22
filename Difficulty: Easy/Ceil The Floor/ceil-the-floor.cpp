//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        //vector<int> v(2);
        sort(arr.begin(),arr.end());
        int f=-1,c=-1,l=0,h=arr.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(arr[m]>x){
                c=m;
                h=m-1;
            }
            else if(arr[m]<x){
                f=m;
                l=m+1;
            }
            else{
                return {x,x};
            }
        }
        return {f!=-1?arr[f]:-1,c!=-1?arr[c]:-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends