class Solution {
public:
    string restoreString(string s, vector<int>& vec) {
          string res=s;
        for(int i=0;i<res.size();i++){
            res[vec[i]]=s[i];
        }
        return res;
    }
};