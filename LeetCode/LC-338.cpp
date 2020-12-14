class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>s;
        for(int i=0;i<=num;i++){
            s.push_back(__builtin_popcount(i));
        }
        cout<<__builtin_popcount(13)<<endl;
        return s;
    }
};
