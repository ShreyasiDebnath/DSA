class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=nums[0],prev2=0;
    int n=nums.size();
     ➡️ //first sum with outthe last
    for(int i=1;i<nums.size()-1;i++){
       int take=nums[i];
       if(i>1  ){
             take+=prev2;   
       }           
        int nottake=prev;
        prev2=prev;
        prev=max(take,nottake);
       //cout<<sum1<<" "<<sum2<<" "<<endl;
    }
     ➡️ //second sum without the first
    int prev3=nums[0],prev4=0;
    if(n-1!=0){
        prev3=nums[1];
    }
    if(n-1!=0){
    for(int i=2;i<nums.size();i++){
       int take=nums[i];
       if(i>2  ){
             take+=prev4; 
             
       }          
        int nottake=prev3;
        prev4=prev3;
        prev3=max(take,nottake);
        
       //cout<<sum1<<" "<<sum2<<" "<<endl;
    }
    }
    
     
  return max(prev,prev3);
        
    }
};
