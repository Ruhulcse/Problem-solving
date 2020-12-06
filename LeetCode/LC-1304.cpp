class Solution {
public:
    vector<int> sumZero(int n) {
       vector<int>num;
        for(int i=0;i<n;i++){
            num.push_back(i*2-n+1);
        }
        return num;
    }
};
