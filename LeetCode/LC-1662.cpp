class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string m="",n="";
        for(int i=0;i<word1.size();i++){
            m+=word1.at(i);
        }
        
        for(int i=0;i<word2.size();i++){
            n+=word2.at(i);
        }
        
        if(n==m){
            return true;
        }
        else{
            return false;
        }
    }
};
