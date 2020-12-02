class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=0;
        for(auto account : accounts){
            int sum=0;
            for(auto i : account){
                sum+=i;
            }
            if(sum>mx){
                mx=sum;
            }
        }
        return mx;
    }
};
