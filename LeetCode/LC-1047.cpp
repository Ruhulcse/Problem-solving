class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>ch;
        for(int i=0;i<s.size();i++){
            if(!ch.empty()){
                if(ch.top()==s[i]){
                    ch.pop();
                }
                else{
                    ch.push(s[i]);
                }
            }
            else{
                ch.push(s[i]);
            }
            
        }
        string n="";
        while(!ch.empty()){
            n+=ch.top();
            ch.pop();
        }
        reverse(n.begin(),n.end());
        return n;
    }
};
