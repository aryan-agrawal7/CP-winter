#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    long long n,k;
    cin>>n>>k;
    if(n%k==0 || n%2==0){
        cout<<"YES"<<nl;
    }
    else{
        if(k%2==1 && n>k){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
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
