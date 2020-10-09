#include <bits/stdc++.h> 
class Solution {
public:
    void removeBackspaces(string &s) {
        int i=0;
        for(int i=0; i<s.size(); i++) {
            if (s[i] == '#') {
                int backSteps = i>0 ? 2 : 1;
                s.erase(i-backSteps + 1, backSteps);
                i -= backSteps;
            } 
         }
    }
    bool backspaceCompare(string S, string T) {
        removeBackspaces(S);
        removeBackspaces(T);
        return S==T;     
    }
};