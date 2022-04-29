class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1;
        while(i <= j && j < nums.size()){
            if(nums[i] == nums[j]) j++;
            else{
                i++;
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return i+1;
    }
};