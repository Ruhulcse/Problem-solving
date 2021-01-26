class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        bool result = true;
        int cnt=k;
        for(auto num : nums){
            if(num==1){
                if(cnt<k){
                    return false;
                }
                cnt=0;
            }
            else{
                cnt++;
            }
        }
     return result;
    }
};
