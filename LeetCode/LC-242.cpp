class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>hash1;
        map<char,int>hash2;
        for(auto i : s){
            hash1[i]++;
        }
        for(auto i : t){
            hash2[i]++;
        }
        if(hash1==hash2){
            return true;
        }
        return false;
    }
};
