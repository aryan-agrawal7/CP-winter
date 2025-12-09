#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d){
        cout<<-1<<nl;
        return;
    }
    a += (d-b);
    if(a<c){
        cout<<-1<<nl;
        return;
    }
    cout<<(d-b) + abs(c-a)<<nl;
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
