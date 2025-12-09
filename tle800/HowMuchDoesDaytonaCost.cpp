#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    bool flag = false;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i]==m){
            flag = true;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
