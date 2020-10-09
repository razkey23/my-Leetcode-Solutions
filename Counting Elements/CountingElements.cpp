class Solution {
public:
    int countElements(vector<int>& arr) {
        int max1=0;
        for (int i=0;i<arr.size();i++) {
            if (max1<=arr[i]) max1=arr[i];
        }
        max1++;
        int hash[max1];
        for (int i=0;i<max1;i++) hash[i]=0;
        for (int i=0;i<arr.size();i++) hash[arr[i]]++;
        int sum=0;
        for (int i=0;i<max1-1;i++) {
            if (hash[i]!=0) {
                if (hash[i+1]!=0) sum+=hash[i];
            }
        }
        return sum;
    }
};