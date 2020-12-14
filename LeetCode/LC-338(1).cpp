class Solution {
public:
    
    vector<int> countBits(int num) {
        vector<int>s(num+1,0);
        for(int i=1;i<=num;i++){
            s[i]=s[i>>1]+i%2;
        }
        return s;
    }
};
