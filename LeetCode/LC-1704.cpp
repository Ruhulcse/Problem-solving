class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt1=0,cnt2=0;
        int i=0,j=s.size()-1;
        string ch = "aeiouAEIOU";
        while(i<j){
           if(ch.find(s[i])<ch.length()){
               cnt1++;
           }
            if(ch.find(s[j])<ch.length()){
               cnt2++;
           }
            i++;
            j--;
        }
       
      return (cnt1==cnt2?true:false);
    }
};
