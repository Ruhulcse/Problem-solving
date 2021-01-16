class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0){
            return 0;
        }
        vector<int>num(n+1,0);
        num[0]=0;
        num[1]=1;
        int maximum=1;
        for(int i=1;i<=n/2;i++){
            if(i*2 > n || (2*i + 1) > n)
                break;
            num[i*2]=num[i];
            num[i*2+1]=num[i]+num[i+1];
            maximum=max(maximum,num[i*2+1]);
        }
        return maximum;
    }
};
