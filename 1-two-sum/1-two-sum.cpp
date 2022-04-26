class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int left = target - nums[i];
            if(mp.find(left) != mp.end() && i != mp[left]){
                ans.push_back(i);
                ans.push_back(mp[left]);
                break;
            }
        }
        return ans;
        
    }
};