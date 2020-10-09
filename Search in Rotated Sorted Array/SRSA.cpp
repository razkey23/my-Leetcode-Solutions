class Solution {
public:
    
    int search1(vector<int> &arr, int l, int h, int key) 
    { 
    if (l > h) return -1; 
  
    int mid = (l+h)/2; 
    if (arr[mid] == key) return mid; 
  
    /* If arr[l...mid] is sorted */
    if (arr[l] <= arr[mid]) 
    { 
        /* As this subarray is sorted, we can quickly 
        check if key lies in half or other half */
        if (key >= arr[l] && key <= arr[mid]) 
        return search1(arr, l, mid-1, key); 
         /*If key not lies in first half subarray,  
           Divide other half  into two subarrays, 
           such that we can quickly check if key lies  
           in other half */
        return search1(arr, mid+1, h, key); 
    } 
  
    /* If arr[l..mid] first subarray is not sorted, then arr[mid... h] 
    must be sorted subarray */
    if (key >= arr[mid] && key <= arr[h]) 
        return search1(arr, mid+1, h, key); 
  
    return search1(arr, l, mid-1, key); 
    } 
    
    
    int search(vector<int>& nums, int target) {
       return search1(nums,0,nums.size()-1,target); 
    }
};