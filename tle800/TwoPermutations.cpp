#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"YES"<<nl;
        return;
    }
    if(b+c>=a-1){
        cout<<"NO"<<nl;
        return;
    }
    cout<<"YES"<<nl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
