//{ Driver Code Starts

// } Driver Code Ends
//Back-end complete function Template for Java
import java.util.*;

public class Main {
    public static void main(String args[]) {
        // Your Code Here
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int res=n*10;
        while(res>=n){
            System.out.print(res+" ");
            res-=n;
        }
    }
}

//{ Driver Code Starts.
// } Driver Code Ends