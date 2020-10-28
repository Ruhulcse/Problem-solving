class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char S[128]={0};
        char T[128]={0};
        for(int i=0;i<s.size();i++){
            if(S[s[i]]!=T[t[i]]){
                return false;
            }
            S[s[i]]=i+1;
            T[t[i]]=i+1;
        }
        
        return true;
    }
};