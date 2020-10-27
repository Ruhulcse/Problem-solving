#include<bits/stdc++.h>
using namespace std;
 
int main() {
 int n;
 vector<int>num;
 cin>>n;
 for(int i=0;i<n;i++){
   int t;
   cin>>t;
   num.push_back(t);
 }
 sort(num.begin(),num.end());
  vector<int>res(n);
  int j=0;
 for(int i=1;i<n;i+=2){
  res[i]=num[j++];
  }
  for(int i=0;i<n;i+=2){
        res[i]=num[j++];
  }
 cout<<(n-1)/2<<endl;
   for(auto x : res){
   cout<<x<<" ";
     }
 cout<<endl;
}