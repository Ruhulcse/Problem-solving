class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
    vector<int>res;
    for(int i=0;i<nums.size()-1;i++){
    for(int j=i+1;j<nums.size();j++){

      if(nums.at(i)+nums.at(j)==tar){
       res.push_back(i);
          res.push_back(j);
      }
    }
  }
        return res;
    }
};
