class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>result;
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto m : mp){
            if(m.second==1){
                result.push_back(m.first);
            }
        }
        return result;
    }
};
