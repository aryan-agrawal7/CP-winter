#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n,k;
    cin>>n>>k;
    if(n%k==0){
        cout<<2<<nl<<n-1<<" "<<1<<nl;
    }
    else{
        cout<<1<<nl<<n<<nl;
    }
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
