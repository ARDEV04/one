#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int testcase;
    cin>>testcase;
    while(testcase--){
    void mouse()
    {
    ll p;
    cin>>p;
    vector<ll>vec(p);
    for(ll i=0;i<p;i++) cin>>vec[i];
    ll ans=0;
    for(ll i=0;i<p-1;i++){
        if(vec[i]>vec[i+1]) {
            ans++;
            vec[i+1]=max(vec[i+1],vec[i]);
        }
    }
    cout<<ans<<endl;
    }
    }
}