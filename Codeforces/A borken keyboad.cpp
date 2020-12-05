#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int test;
  cin>>test;
 
  while(test--){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]==s[i+1]){
        s[i]='0';
        s[i+1]='0';
      }
    }
    set<char>ch;
    for(auto i : s){
      if(i!='0'){
        ch.insert(i);
      }
    }
   for(auto res : ch){
     cout<<res;
   }
   cout<<endl;
  }
  return 0;
}
