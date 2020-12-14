
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int test;
    cin>>test;
    while(test--){
        int l,k;
        cin>>l>>k;
        string s="abc";
        for(int i=0;i<l;i++){
            cout<<s[i%3];
        }
        cout<<endl;
    }
    return 0;
}
