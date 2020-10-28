class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int left=1,right=num;
        while(left<=right){
            long long int mid=(left+right)/2;
             long long int sq=mid*mid;
            if(sq==num){
                return true;
            }
            else if(sq>num){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return false;
    }
};