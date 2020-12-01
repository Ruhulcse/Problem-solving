class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        int l1=s1.size(),l2=s2.size();
        if(l1>l2){
            return false;
        }
        int left=0,right=0;
        while(right<l1){
            hash1[s1[right]-'a']++;
            hash2[s2[right]-'a']++;
            right++;
        }
        right--;
        while(right<l2){
            if(hash1==hash2){
                return true;
            }
            right++;
            if(right!=l2){
                hash2[s2[right]-'a']++;
            }
            hash2[s2[left]-'a']--;
            left++;
        }
        return false;
    }
};
