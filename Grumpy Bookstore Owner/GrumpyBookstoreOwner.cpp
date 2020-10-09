class Solution {
public:
    int maxSum(vector<int>& arr, int k) 
    { 
    // k must be greater 
    int n=arr.size();
    if (n < k) 
    { 
       cout << "Invalid"; 
       return -1; 
    } 
  
    // Compute sum of first window of size k 
    int res = 0; 
    for (int i=0; i<k; i++) 
       res += arr[i]; 
  
    // Compute sums of remaining windows by 
    // removing first element of previous 
    // window and adding last element of  
    // current window. 
    int curr_sum = res; 
    for (int i=k; i<n; i++) 
    { 
       curr_sum += arr[i] - arr[i-k]; 
       res = max(res, curr_sum); 
    } 
    return res; 
  } 
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int result=0;
        for (int i=0;i<customers.size();i++) {
            if (grumpy[i]==0) {
                result+=customers[i];
                customers[i]=0;
            }
        }
       int res1= maxSum(customers,X);
       result+=res1;
       return result;
    }
};