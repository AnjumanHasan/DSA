//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	   int mid;
	   int count=0,first=0,last=0;
	   
	   int lo=0,hi=n-1;
	   while(lo<=hi)
	   {
	       mid=lo+(hi-lo)/2;
	       if(arr[mid]==x)
	       {
	           first=mid;
	           break;
	       }
	       else if(arr[mid]>x)
	       {
	           hi=mid-1;
	       }
	       else
	       {
	        lo=mid+1;   
	       }
	   }
	   last=mid;
	   first=mid;
	   while(first>=0 && arr[first]==x)
	   {
	       count++;
	       first--;
	   }
	   while(last<n && arr[last]==x)
	   {
	       count++;
	       last++;
	   }
	   return (count==0)?count:count-1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends