class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>r;
        for(int i=0;i<nums.size();i++){
            if(r.count(nums[i]))return true;
            r.insert(nums[i]);
        }
        return false;
        
    }
};