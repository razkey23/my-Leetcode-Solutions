#include <string>
class Solution {
public:
    bool isHappy(int n) {
      string num = to_string(n);
      while(1) {
        int sum=0;
        for (int i=0;i<num.size();i++) {
            int temp=num[i]-'0';
            temp*=temp;
            sum+=temp;    
        }
        num=to_string(sum);
        if (sum==89 || sum==145 || sum==42 || sum==20 || sum==4 || sum== 16 || sum==37 || sum==58) return false;
        else if (sum==1) return true;
      }
    }
};