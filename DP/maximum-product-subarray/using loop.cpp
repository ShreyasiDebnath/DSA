//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution{
   
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> nums, int n) {
	long long int m;
  long long int mini;
  long long ans=nums[0];
       
    m=nums[0];
    mini=nums[0];
   // cout<<mini<<"-->";
     // cout<<m<<endl;  
        for(int i=1;i<n;i++){
    long long int t=  mini*nums[i];
            //cout<<t<<"-->";
            long long int tem=nums[i];
    mini=min(m*tem,t);
    mini=min(mini,tem);
  //cout<<mini<<"-->";
     m=max(m*tem,t);
    m=max(m,tem);
            //cout<<m<<endl;
     ans=max(ans,m);

       }
        
        return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
