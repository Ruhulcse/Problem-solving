class Solution {
public:
    int subtractProductAndSum(int n) {
        int a,b=0,c=1,d;
       while(n){
           a=n%10;
           b+=a;
           c*=a;
           n=n/10;
       }
        return c-b;
    }
};
