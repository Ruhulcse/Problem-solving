///...........................Bismillahi-r-Rahmani-r-Rahim..................................///
///...................................*****.................................................///
///                  Mohammad Ruhul Amin                                                    ///
///                  Department of CSE                                                      ///
///                  College of business Science and Technology(CBST),Mymensingh.           ///
///...................................*****.................................................///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
ll ara[200010];
int main()
{
  IOS;
ll n,t,c;
    cin>>n>>t>>c;
    for(int i=1;i<=n;i++) {
        cin>>ara[i];
    }
    ll cnt=0,ans=0,temp=0;
    for(int i=1;i<=n;i++) {
        if(ara[i]>t) {
            temp=cnt-c+1;
            cnt=0;
            if(temp>0) ans+=temp;
        }
        else cnt++;
    }
    temp=cnt-c+1;
    if(temp>0) ans+=temp;
    cout<<ans<<endl;
    return 0;
}
