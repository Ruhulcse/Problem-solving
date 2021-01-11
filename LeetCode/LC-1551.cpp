class Solution {
public:
    int minOperations(int n) {
        int result=0;
        int i=0;
        int test=1;
        while(i<n){
            if(test<n){
                result+=n-test;
            }
            else{
                break;
            }
            test+=2;
            i++;;
        }
        return result;
    }
};
