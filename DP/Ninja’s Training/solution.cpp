
#include <bits/stdc++.h>

int ninjaTraining(int n, vector<vector<int>> &points)
{    vector<vector<int>> dp(n,vector<int>(4,0)); 
     dp[0][0]=max(points[0][1],points[0][2]);
     dp[0][1]=max(points[0][0],points[0][2]);
     dp[0][2]=max(points[0][0],points[0][1]);
     dp[0][3]=max(points[0][0],max(points[0][1],points[0][2]));
 int point=0;
 for(int i=1;i<n;i++){
     
        int sum1=points[i][0]+dp[i-1][0];//for a particular tast the total point = point of that task+ prevday max point except the similar task
   int  sum2=points[i][1]+dp[i-1][1];
    int  sum3=points[i][2]+dp[i-1][2];
     //cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<" "<<point<<endl;
        point=max(sum1,max(sum2,sum3));
      dp[i][0]=max(sum2,sum3);//storing the max point if this index's task is not performed
     dp[i][1]=max(sum1,sum3);
     dp[i][2]=max(sum1,sum2);
     //cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<" "<<point<<endl;
     //cout<<point<<"\";
     
 }
 return point;

    // Write your code here.
}
