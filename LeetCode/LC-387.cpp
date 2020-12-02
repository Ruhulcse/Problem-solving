class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>result;
        for(auto c : s){
            result[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(result[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
