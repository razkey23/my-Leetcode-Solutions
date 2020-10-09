class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        for (int i=0;i<nums.size();i++) {
            output.push_back(1);
        }
        
        if (nums.size()==1) return output;
        int temp=1;
        for (int i = 0; i < nums.size(); i++) { 
          output[i] = temp; 
          temp *= nums[i]; 
  
        } 
        temp=1;
        for (int j=nums.size()-1;j>=0;j--) {
            output[j]*=temp;
            temp *=nums[j];
        }
        return output;
    }
};