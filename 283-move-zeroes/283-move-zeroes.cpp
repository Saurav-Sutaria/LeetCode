class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j =1;
        while(i <= j && j < nums.size()){
            if(nums[i] != 0) i++;
            else{
                if(nums[j] != 0){
                    swap(nums[i],nums[j]);
                    i++;
                }
    
            }
            j++;
        }        
    }
};