class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int cnt=0;
        //applied two pointer in this problem
        while(i<j){
            if(nums[i]+nums[j]==k){
                cnt++,i++,j--;
            }
            if(nums[i]+nums[j]>k){
                j--;
            }
            if(nums[i]+nums[j]<k){
                i++;
            }
        }
        return cnt;
    }
};
