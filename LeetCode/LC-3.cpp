class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            unordered_set<char>store;
        int i=0,j=0,ans=0;
        while(i<s.size()&&j<s.size()){
            if(store.find(s[i])==store.end()){
                store.insert(s[i++]);
                ans=max(ans,i-j);
            }
            else{
                store.erase(s[j++]);
            }
        }
        return ans;
    }
};
