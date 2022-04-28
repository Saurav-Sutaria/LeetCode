class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majority = nums[0];
        for(auto i:nums){
            if(count == 0) {majority = i;count++;}
            else if(majority == i) count++;
            else count--;
        }
        return majority;
    }
};