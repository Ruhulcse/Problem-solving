
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin>>test;
  while(test--){
    string s;
    cin>>s;
    int l=s.size();
    int lf=0,rg=0;
    for(int i=0;i<l;i++){
      if(s[i]=='1'){
        lf=i;
        break;
      }
    }
    for(int i=l-1;l>=lf;i--){
      if(s[i]=='1'){
        rg=i;
        break;
      }
    }
    int ans=0;
    for(int i=lf;i<=rg;i++){
      if(s[i]=='0'){
        ans++;
      }
    }
    cout<<ans<<endl;
  }
 
}