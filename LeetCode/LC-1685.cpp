class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        for(int i=1;i<nums.size();i++){
            ans[0]+=(nums[i]-nums[0]);
        }
        for(int i=1;i<nums.size();i++){
            int diff= nums[i]-nums[i-1];
            int rightindex=nums.size()-i;
            ans[i]=ans[i-1]+(diff*i-diff*rightindex);
        }
        return ans;
    }
};
