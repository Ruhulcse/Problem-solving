class Solution {
public:
    int Makezerro(int n,int cnt){
          if(n==0){
            return cnt;
          }
          if(n%2==0){
            cnt++;
            n=n/2;
          }
          else{
            cnt++;
            n--;
          }
          return Makezerro(n,cnt);
     }

    int numberOfSteps (int n) {
        int cnt=0;
        return Makezerro(n,cnt);
        
    }
};