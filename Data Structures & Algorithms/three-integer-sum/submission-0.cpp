class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>res;
        for(int i=0;i<n;i++){
            if(i>0 &&nums[i]==nums[i-1]) continue;
            int target=-nums[i];
            int right=i+1,left=n-1;
            while(right<left){
                int sum=nums[right]+nums[left];
                if(sum==target){
                    res.push_back({nums[i],nums[left],nums[right]});
                    while(right<left&&nums[right]==nums[right+1]) right++;
                    while(right<left&&nums[left]==nums[left-1]) left--;
                    right++;
                    left--;
                }
                else if(sum<target){
                    right++;
                }
                else{
                    left--;
                }
            }
        }
        return res;
    }
};
