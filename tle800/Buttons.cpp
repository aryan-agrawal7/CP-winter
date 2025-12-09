#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int fir = (c+1)/2;
    fir+=a;
    int sec = c/2;
    sec+=b;
    if(fir>sec){
        cout<<"First"<<nl;
    }
    else{
        cout<<"Second"<<nl;
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
