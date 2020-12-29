class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back(to_string(nums[i]));
        }
        sort(vec.begin(),vec.end(),[](string &s1, string &s2){
            return s1+s2>s2+s1;
        });
        string s="";
        for(int i=0;i<vec.size();i++){
           s+=vec[i];
        }
        return s[0]=='0'?"0":s;
    }
};
