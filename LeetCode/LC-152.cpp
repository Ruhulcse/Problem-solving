class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0){
            return -1;
        }
        int minv=nums[0],maxv=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            int c1=maxv*nums[i];
            int c2=minv*nums[i];
            maxv=max(nums[i],max(c1,c2));
            minv=min(nums[i],min(c1,c2));
            res=max(res,maxv);
        }
        return res;
    }
};
