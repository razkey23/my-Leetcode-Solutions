#include <vector>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int carry=1;
      string x="";
      for (int i=digits.size()-1;i>=0;i--) {
          int x=digits[i]+carry;
          if (x==10) {
              carry=1;
              digits[i]=0;
              if (i==0) digits.insert(digits.begin(),1);
          }
          else {
              digits[i]=x;
              carry=0;  
          }
      }
      return digits;
    }
};