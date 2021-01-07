class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int>res;
  unordered_map<int,int>hash;
  for(int i=0;i<nums.size();i++){
    int f=target-nums.at(i);
    if(hash.find(f)!=hash.end()){
      res.push_back(hash[f]);
      res.push_back(i);
    }
    hash[nums.at(i)]=i;
  }
    return res;
        
        
        
    }
};
