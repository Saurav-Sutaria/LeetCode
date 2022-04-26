class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        int carry = 1;
        for(int i=n-1;i>=0;i--){
            int sum = digits[i] + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
        }
        if(carry == 1) ans.push_back(carry);
        //reverse the array
        for(int i=0,j=ans.size()-1;i<j;i++,j--){
            swap(ans[i],ans[j]);
        }
        return ans;
    }
};