class Solution {
public:
    //GREEDY APPROACH
    bool checkValidString(string s) {
        int lo=0,hi=0;
        for(int i=0;i<s.length();++i) {
           if (s[i]=='*') {
               --lo;
               ++hi;
           }
           else  if(s[i]=='(') {
                ++lo;
                ++hi;
            }
          else {
                --lo;
                --hi;
                if(hi<0) break;
            }
            if(lo<0) lo=0;
        }
        return lo==0;
    }
};