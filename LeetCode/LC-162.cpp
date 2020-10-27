class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int left=0,right=nums.size()-1;
        while(left<right){
            int mid=(left+right)/2;
            nums[mid]<nums[mid+1]?left=mid+1:right=mid;
        }
        return left;
    }
};