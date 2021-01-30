class Solution {
public:
    vector<string>result;
    void Generate(vector<string>str,string s,int l,int r,int mx){
        if(s.size()==mx*2){
            result.push_back(s);
            return;
        }
        if(l<mx){
            Generate(str,s+"(",l+1,r,mx);
        }
        if(r<l){
            Generate(str,s+")",l,r+1,mx);
        }
    }
    vector<string> generateParenthesis(int n) {
        Generate(result,"",0,0,n);
        return result;
    }
};
