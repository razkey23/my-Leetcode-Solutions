class Solution {
public:
    int max(int a, int b) { return a>b? a: b; } 
    int findMaxLength(vector<int>& nums) {
        if (nums.size()==0) return 0;
        int maxsize = -1, startindex;
        int sumleft[nums.size()+1];
        int min, max;  
        int i; 
        int n=nums.size();
        sumleft[0] = ((nums[0] == 0)? -1: 1); 
        min = sumleft[0]; max = sumleft[0]; 
        for (i=1; i<n; i++) 
        {       
         sumleft[i] = sumleft[i-1] + ((nums[i] == 0)? -1: 1); 
         if (sumleft[i] < min) min = sumleft[i]; 
         if (sumleft[i] > max) max = sumleft[i]; 
        } 
        int hash[max-min+1]; 
        for (i=0; i<max-min+1; i++) hash[i] = -1; 
        for (i=0; i<n; i++) 
        { 
          if (sumleft[i] == 0) 
          { 
            maxsize = i+1; 
            startindex = 0; 
          } 
   
        // Case 2: fill hash table value. If already 
        //         filled, then use it 
  
          if (hash[sumleft[i]-min] == -1) hash[sumleft[i]-min] = i; 
          else
          { 
            if ((i - hash[sumleft[i]-min]) > maxsize) 
            { 
                maxsize = i - hash[sumleft[i]-min]; 
                startindex = hash[sumleft[i]-min] + 1; 
            } 
           } 
          } 
          if (maxsize==-1) return 0;
          return maxsize;
    }
};