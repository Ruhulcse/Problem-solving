class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>dp{0,1,1,1,1,1};
        //for example calculatig value for 2
        for(int i=1;i<=n;i++){
            for(int j=1;j<=5;j++){ //n=1; dp vector will be dp{0,1,2,3,4,5}
                dp[j]+=dp[j-1];    //n=2; dp vector will be dp{0,1,3,6,10,15};
            }
        }
        //dp[5]==15 the maximum value
        return dp[5];
    }
};
