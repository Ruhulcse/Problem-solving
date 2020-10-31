class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>num;
         while(n>=10){
           int a;
           a=n%10;
           num.push_back(a);
           n=n/10;
         }
         num.push_back(n);
         int sum=0;
         int mul=1;
         for(auto i:num){
           sum+=i;
           mul*=i;
         }
        return mul-sum;
    }
};
