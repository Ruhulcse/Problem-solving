class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int left=0;
        int right=nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans=0;
        while(left<=right){
            if(nums[left]+nums[right]<=limit){
                left++;
                right--;
                ans++;
            }
            else{
                right--;
                ans++;
            }
        }
        return ans;
    }
};
