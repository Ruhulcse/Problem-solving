class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        int res;
        for(auto i: mp){
            if(i.second==1){
                res=i.first;
            }
        }
        return res;
    }
};
