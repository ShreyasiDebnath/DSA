/*
QUESTION:
Given an integer array nums, find the 
subarray
 which has the largest sum and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;
        int maxi=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maxi) maxi=sum;//if new sum is greater than the previous then max=new sum
            if(sum<0) sum=0; //if the sum is positive then only we will take that if sum is negative then we will keep that and set sum=0
        }
        return maxi;
        
    }
};
