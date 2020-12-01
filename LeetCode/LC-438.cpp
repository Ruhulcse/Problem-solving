class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        if(p.size()>s.size()){
            return res;
        }
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        int l1=p.size();
        int l2=s.size();
        int right=0,left=0;
        while(right<l1){
            hash1[p[right]-'a']++;
            hash2[s[right]-'a']++;
            right++;
        }
        right--;
        while(right<l2){
            if(hash1==hash2){
                res.push_back(left);
            }
            right++;
            if(right!=l2){
                hash2[s[right]-'a']++;
            }
            hash2[s[left]-'a']--;
            left++;
        }
        return res;
    }
    
};
