#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
    int n;
    cin>>n;
    if(n==2){
        cout<<2<<endl;
    }
    else{
        vector<long int>val;
        long int a=0;
        for(int i=1;i<=n;i++){
            a+=pow(2,i);
            val.push_back(pow(2,i));
        }
        reverse(val.begin(),val.end());
        long int b=0;
        for(int i=0;i<val.size()/2;i++){
            b+=val.at(i);
        }
        cout<<abs(a-b)<<endl;
    }
  }
  return 0;
}