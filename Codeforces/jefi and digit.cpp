#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
 
int main()
{
    IOS;
 long long int i,j,k,n,ans,a=0,b=0;
      cin>>k;
      for(i=0;i<k;i++)
      {
          cin>>n;
          if(n==5)
            a++;
          else b++;
      }
     if(a>=9 && b>=1)
     {
         for(i=0;i<(a/9)*9;i++)
            cout<<5;
        for(i=0;i<b;i++)
            cout<<0;
     }
     else if(b!=0){
         cout<<0<<endl;
     }
     else{
       cout<<-1<<endl;
     }
    return 0;
}
