
class Solution {
int f(int n,vector<int>& nums,vector<int>& dp,vector<int>& mi){
    if(n==0) {
        mi[n]=nums[n];
        return dp[n]=nums[n];}
    if(dp[n]!=INT_MIN) return dp[n];
     int first=INT_MIN;
    int second= INT_MIN;
    int third=INT_MIN;
    int mp=INT_MIN;
    int m=INT_MIN;
    int mini=INT_MAX;
     first= f(n-1,nums,dp,mi)  *nums[n];
     second= mi[n-1] *nums[n];
    //mp=nums[n-1]*nums[n];
     third=nums[n];
    mini=min(first,second);
    mini=min(mini,third);
    mi[n]=mini;
     m=max(first,second);
    //m=max(m,mp);
    dp[n]=max(m,third);
  //cout<<n<<"-->"<<dp[n]<<endl;
    return dp[n];
}
public:

    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,INT_MIN);
    vector<int> mi(n,INT_MAX);
    dp[0]=nums[0];
        f(n-1,nums,dp,mi);
        
        return *max_element(dp.begin(), dp.end());
        
    }
};

/* *************************************ALTERNATIVE*************************************** */



class Solution {
 int f(int n,vector<int>& nums,long long int& m,long long int& mini,long long int& ans){
    if(n==0) {
       // mi[n]=nums[n];
        return nums[n];}
   
    long long int first=INT_MIN;
    long long int second= INT_MIN;
    long long int third=INT_MIN;
    long long int mp=INT_MIN;
   
     first= f(n-1,nums,m,mini,ans)  *nums[n];
     second= mini *nums[n];
     third=nums[n];
    mini=min(first,second);
    mini=min(mini,third);
  
     m=max(first,second);
    m=max(m,third);
     ans=max(ans,m);
    //cout<<n<<"-->"<<dp[n]<<endl;
    return m;
}
public:

    int maxProduct(vector<int>& nums) {
        int n=nums.size();
         long long int m=INT_MIN;
    long long int mini=INT_MAX;
    long long  ans=nums[0];
	   
    m=nums[0];
    mini=nums[0];
        f(n-1,nums,m,mini,ans);
        
        return ans;
        
    }
};
