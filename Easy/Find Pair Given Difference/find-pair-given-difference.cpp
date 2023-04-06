//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int n, int size){
    sort(arr,arr+n);
    int c=0;   // count of number of such pairs
    for(int i=0;i<n;i++){
        int e = arr[i];   // first element of the pair
        int rsum = size+e;  // the second element to be searched using binary search
        int lo = i+1;    // since, the array is sorted
        int hi = n-1;     
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==rsum){
                c++;    // If the second element is found increase the count
                break;
            }else if(arr[mid]<rsum){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
    }
    return c;
}

