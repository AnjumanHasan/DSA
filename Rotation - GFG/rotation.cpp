//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	   int lo=0,hi=n-1;
	   if (arr[lo] <= arr[hi])
	   {
	        return 0;  
	   }
     
	   int mid;
	   while(lo<=hi)
	   {
	       mid=lo+(hi-lo)/2;
	       int prev=(mid-1+n)%n;
	       int next=(mid+1)%n;
	      
	           if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
	           {
	               return mid;
	           }
	      
	       else if(arr[hi]>=arr[mid])
	       {
	           hi=mid-1;
	       }
	        else if(arr[mid]>=arr[lo])
	       {
	           lo=mid+1;
	       }
	   }
	   return 0;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends