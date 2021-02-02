class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];
         memset(dp, 0, sizeof(dp));
        //calculating dp base table
        for(int i=0;i<m;i++){
            dp[i][n-1]=1;
        }
        for(int j=0;j<n;j++){
            dp[m-1][j]=1;
        }
        //bottom up dp apply for calculatig actuall result;
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};
