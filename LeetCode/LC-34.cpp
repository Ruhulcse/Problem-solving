class Solution {
public:
    int lowerindex(vector<int>& nums, int target){
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid=(r-l)/2+l;
            if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return l;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int index1=lowerindex(nums,target);
        int index2=lowerindex(nums,target+1)-1;
        vector<int>result(2,-1);
        if(index1<nums.size()&&nums[index1]==target){
            result[0]=index1;
            result[1]=index2;
        }
        return result;
    }
};
