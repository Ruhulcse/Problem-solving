class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i=0;
        int j=num.size()-1;
        vector<int>res;
        while(i<j){
            int sum=num.at(i)+num.at(j);
            if(sum==target){
              return {i+1,j+1};
            }
            sum>target?j--:i++;
        }
      return {};
    }
};