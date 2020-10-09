#include <queue> 
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int stone :stones ) pq.push(stone);
        while(pq.size()!=0) {
            if(pq.size()==1) return pq.top();
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            pq.push(x-y);
        }
        return -1;
    }
};