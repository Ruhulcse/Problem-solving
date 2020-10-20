class Solution {
public:
    int numJewelsInStones(string j, string s) {
        
          map<char,int>mp;
          map<char,int>::iterator it;
          for(int i=0;i<s.size();i++){
            mp[s[i]]++;
          }
          int cnt=0;
          for(int i=0;i<j.size();i++){
            cnt+=mp[j[i]];
          }
        return cnt;
    }
};