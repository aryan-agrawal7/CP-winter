#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
        a[i]--;
    }
    for(int i =0;i<n;i++){
        cout<<n-a[i]<<" ";
    }
    cout<<nl;
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
