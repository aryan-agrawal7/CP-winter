#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    bool bruhh = true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i!=0 && a[i]!=a[i-1]){
            bruhh = false;
        }
    }
    if(bruhh){
        cout<<"NO"<<nl;
        return;
    }
    sort(a.begin(),a.end());
    int l =0,r=n-1;
    cout<<"YES"<<nl;
    while(l<r){
        cout<<a[l]<<" "<<a[r]<<" ";
        l++;
        r--;
    }
    if(n%2==1){
        cout<<a[l];
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
