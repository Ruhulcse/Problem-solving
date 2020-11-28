class Solution {
public:
    string getSmallestString(int n, int k) {
        string answer="";
        for(int i=0;i<n;i++){
            answer+='a';
            k--;
        }
      int   i=n-1;
        while(k>0){
            if(k>=25){
                answer[i]='z';
                k=k-25;
            }
            else{
                answer[i]=answer[i]+k;
                    break;
            }
            i--;
        }
        return answer;
    }
};
