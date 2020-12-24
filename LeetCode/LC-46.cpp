class Solution {
public:
    vector<vector<int> >result;
    
    void calculate(vector<int>& nums,int n){
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(nums[i]);
        }
        result.push_back(res);
    }
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        do{
            calculate(nums,nums.size());
        }while(next_permutation(nums.begin(), nums.end()));
        return result;
    }
};
