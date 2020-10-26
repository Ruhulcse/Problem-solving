// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int to=n,from=1,mid;
        while(from!=to){
             mid=((long long)from+to)/2;
            if(isBadVersion(mid)==true){
                to=mid;
            }
            else{
                from=mid+1;
            }
        }
        return from;
        
    }
};