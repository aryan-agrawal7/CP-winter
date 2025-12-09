#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(k<2){
        bool flag=true;
        for(int i =1;i<n;i++){
            if(a[i]<a[i-1]){
                cout<<"NO\n";
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES\n";
    }
    else{
        cout<<"YES\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}