// Remove Duplicates from Sorted Array

//https://leetcode.com/problems/remove-duplicates-from-sorted-array/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        
        int index=0;
        int uq= 1;
        
        while(uq<n){
            
            if(nums[index]!=nums[uq]){
                index++;
                nums[index]= nums[uq];
            }
            uq++;
        }
        
        return index+1;
    }
};
