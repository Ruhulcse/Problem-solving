class Solution {
public:
    char nextGreatestLetter(vector<char>&ch, char target) {
        auto begin=ch.begin(),end=ch.end();
        auto it=upper_bound(begin,end,target);
        return it!=end?*it:*begin;
    }
};