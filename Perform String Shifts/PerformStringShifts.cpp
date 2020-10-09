class Solution {
public:
    void leftrotate(string &s, int d) 
    { 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
   } 
  
// In-place rotates s towards right by d 
    void rightrotate(string &s, int d) 
    { 
    leftrotate(s, s.length()-d); 
    } 
    string stringShift(string s, vector<vector<int>>& shift) {
        int sumright=0;
        int sumleft=0;
        int shiftnum=0;
        for (int i=0;i<shift.size();i++) {
            vector <int> x=shift[i];
            if (shift[i][0]==0) sumleft+=shift[i][1];
            if (shift[i][0]==1) sumright+=shift[i][1];
        }
        shiftnum=abs(sumleft-sumright);
        shiftnum=shiftnum%s.size();
        if (sumleft>=sumright)leftrotate(s,shiftnum);
        else rightrotate(s,shiftnum);
        return s;
 
    }
};