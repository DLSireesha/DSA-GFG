//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countNumberswith4(int n) {
        int count{};
        do{
            int temp{n};
            do{
                if(temp%10==4){
                    ++count;
                    break;
                }
            }while(temp/=10);
        }while(--n);
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}
// } Driver Code Ends