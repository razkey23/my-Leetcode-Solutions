class Solution {
public:
       int sumOfDigits(int a) 
{ 
    int sum = 0; 
    while (a) 
    { 
        sum += a % 10; 
        a /= 10; 
    } 
    return sum; 
} 
  
// Returns the maximum number  
// with maximum sum of digits. 
int findMax(int x) 
{ 
    // initializing b as 1 and  
    // initial max sum to be of n 
    int b = 1, ans = x; 
  
    // iterates from right to  
    // left in a digit 
    while (x) 
    { 
  
        // while iterating this 
        // is the number from  
        // from right to left 
        int cur = (x - 1) * b + (b - 1); 
  
        // calls the function to  
        // check if sum of cur is 
        // more then of ans 
        if (sumOfDigits(cur) > sumOfDigits(ans) ||  
           (sumOfDigits(cur) == sumOfDigits(ans) &&  
            cur > ans)) 
            ans = cur; 
  
        // reduces the number to one unit less 
        x /= 10; 
        b *= 10; 
    } 
  
    return ans; 
} 

    
    int countLargestGroup(int n) {
        int ans=findMax(n);
        int k=sumOfDigits(ans)+1;
        int hash[k];
        for (int i=0;i<k;i++) hash[i]=0;
        int q=0;
        for (int i=0;i<n+1;i++) {
            q=sumOfDigits(i);
            hash[q]++;    
        }
        int max1=0;
        for (int i=0;i<k;i++) {
            if (hash[i]>=max1) max1=hash[i];
        }
        int counter=0;
        for (int i=0;i<k;i++) {
            if (hash[i]==max1) counter++;
        }
        if (max1==1) counter--;
        return counter;
    }
};