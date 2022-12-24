/*
QUESTION:
  A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
Example 1:

  Input: nums = [1,2,3]
  Output: [1,3,2]
Example 2:

  Input: nums = [3,2,1]
  Output: [1,2,3]
Example 3:

  Input: nums = [1,1,5]
  Output: [1,5,1]
  */

class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int n=v.size();
        int p=0;
        int l=n-1;
        for(int i=n-1;i>0;i--){
            if(v[i-1]<v[i]){
               // l=v[i-1];
                p=i-1;
                break;

            }
        }
        for(int i=n-1;i>p;i--){
            if(v[i]>v[p]){
                l=i;
                break;
                
            }
        }
        swap(v[p],v[l]);
        sort( v.begin() + p+1, v.end());

        
    }
};
