class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum=0,  result=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(i<k){
                sum+=nums[i];
            }
            else{
                result=max(sum,result);
                sum+=nums[i]-nums[i-k];
            }
        }
        result=max(sum,result);
        
        return result/k;
    }
};
