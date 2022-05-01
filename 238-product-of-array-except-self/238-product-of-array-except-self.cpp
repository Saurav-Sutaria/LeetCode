class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int left  = 1, right = 1;
        //left to right
        for(int i=0;i<nums.size();i++){
            ans[i] = left;
            left *= nums[i];
        }
        //right to left
        for(int i=nums.size()-1;i>=0;i--){
            ans[i] *= right;
            right *= nums[i];
        }
        return ans;
    }
};