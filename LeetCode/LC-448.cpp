class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        for(int i=1;i<=nums.size();i++){
            mp[i]++;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>result;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==1){
                result.push_back(i);
            }
        }
        return result;
    }
};
