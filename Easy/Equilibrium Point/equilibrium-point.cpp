//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int i=0,j=n-1;
        long long int left_sum=a[i],right_sum=a[j];
        
        while(i <= j){
            
            if(left_sum == right_sum){
                
                if( i != j){
                    i++;j--;
                    left_sum+=a[i];
                    right_sum+=a[j];
                }
                else{
                    return i+1;
                }
             
            }
            else if(left_sum > right_sum){
                j--;
                right_sum+=a[j];
            }
            else{
                i++;
                left_sum+=a[i];
            }
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends