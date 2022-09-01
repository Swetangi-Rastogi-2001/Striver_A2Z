
//1752. Check if Array Is Sorted and Rotated
//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/


class Solution {
public:
    bool check(vector<int>& nums) {
        int flag=0; //number of transition from greater to smaller should be only once
        
        int n= nums.size();
        
        for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i]){
                flag++;
            }
        }
        
        if(flag>1){
            return false;
        }
        else  if(flag==1){
            //check if last element is greater than first  4 10 5
            if(nums[n-1]>nums[0]){
                return false;
            }
        }
        
        
        return true;
    }
};
