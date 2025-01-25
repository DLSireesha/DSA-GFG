//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void merge(vector<int>& arr,int l,int mid,int r){
        vector<int> v;
        int low=l;
        int right=mid+1;
        while(low<=mid && right<=r){
            if(arr[low]<=arr[right]){
                v.push_back(arr[low]);
                low++;
            }
            else{
                v.push_back(arr[right]);
                right++;
            }
        }
        while(low<=mid){
            v.push_back(arr[low]);
            low++;
        }
        while(right<=r){
            v.push_back(arr[right]);
            right++;
        }
        for(int i=l;i<=r;i++){
            arr[i]=v[i-l];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends