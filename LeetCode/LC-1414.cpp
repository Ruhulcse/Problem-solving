class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int>num;
        num.push_back(1);
        num.push_back(1);
        if(k==3){
            return 1;
        }
        //calculating fibonacci number for make result;
        for(int i=2;i<k;i++){
            int n= num.at(i-1)+num.at(i-2);
            if(n>k){
                break;
            }
            num.push_back(n);
        }
        //making result from vector
        reverse(num.begin(),num.end());
        int cnt=0;
        for(int i=0;i<num.size()-1;i++){
            if(k==0){
                break;
            }
            if(num.at(i)<=k && k-num.at(i)>=0){
                k=k-num.at(i);
                cnt++;
            }
        }
        return cnt;
    }
};
