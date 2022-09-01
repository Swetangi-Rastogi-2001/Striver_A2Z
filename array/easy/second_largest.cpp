

//Given an array Arr of size N, print second largest element from an array.

//https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int first=INT_MIN;
	    int second= INT_MIN;
	    for(int i=0;i<n;i++){
	        if(first<arr[i]){
	            second=first;
	            first=arr[i];
	            
	            continue;
	        }
	        if(first>arr[i]&&second<arr[i]){
	            second=arr[i];
	        }
	    }
	    return (second==INT_MIN)?-1:second;
	}
};



//Time Complexity: O(N), Single-pass solution

//Space Complexity: O(1)
