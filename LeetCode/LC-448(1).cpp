class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
       for(int i=0;i<nums.size();i++){
           int j= abs(nums[i])-1;
           nums[j]=nums[j]>0?-nums[j]:nums[j];
       }
       vector<int>result;
      for(int i=0;i<nums.size();i++){
          if(nums[i]>0){
              result.push_back(i+1);
          }
      }
        return result;
    }
};
