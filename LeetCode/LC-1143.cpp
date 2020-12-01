class Solution {
public:
    int lcs( string s, string p,int m, int n){
        int dp[m+1][n+1];
        
        //calculating dp if empty string exist
        for(auto i = 0; i<=m; i++){
            for(auto j=0; j<=n; j++){
                if(i==0 or j==0){
                    dp[i][j]=0;
                }
            }
        }
        
        //calculating dp table for subsequence
        for(auto i=1; i<=m; i++){
            for(auto j=1; j<=n; j++){
                if(s[i-1]==p[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        return lcs(text1,text2,m,n);
    }
};
