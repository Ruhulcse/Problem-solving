class Solution {
public:
    int mySqrt(int x) {
        long long left=0,right=x;
        long long mid;
        while(left<right){
            mid=left+(right-left)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
     return left*left>x?left-1:left;
    }
};