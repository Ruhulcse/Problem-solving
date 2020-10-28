class Solution {
public:
    int majorityElement(vector<int>& nums) {
          map<int,int>mp;
          for(int i=0;i<nums.size();i++){
            mp[nums.at(i)]++;
          }
          int sz=nums.size()/2;
          int res;
          for(auto i: mp){
            if(i.second>sz){
              res=i.first;
            }
          }
          return res;
    }
};