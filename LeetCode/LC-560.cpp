class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int, int>mp{{0,1}};
        int cnt=0,sum=0;
        for(auto n : nums){
            sum+=n;
            cnt+=mp[sum-k];
            mp[sum]++;
        }
        return cnt;
    }
