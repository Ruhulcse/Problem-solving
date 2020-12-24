class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=0;
        do{
            if(n==1){
                for(int i=0;i<nums.size();i++){
                  cout<<nums[i];
               }
                break;
            }
            n++;
        }while(next_permutation(nums.begin(), nums.end()));
    }
};
