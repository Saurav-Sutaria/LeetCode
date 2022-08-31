class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,-1);
        int currMax = -1;
        for(int i=n-2;i>=0;i--){
            currMax = max(arr[i+1],currMax);
            ans[i] = currMax;
        }
        return ans;
        
    }
};