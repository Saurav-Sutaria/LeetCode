class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        vector<int> ans;
        while(i <= j){
            if(abs(nums[i]) > abs(nums[j])){
                ans.push_back(nums[i]*nums[i]);
                i++;
            }else{
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        //reverse the array
        i = 0, j = ans.size() - 1;
        while(i < j){
            swap(ans[i],ans[j]);
            i++;
            j--;
        } 
        return ans;
    }
};