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
    }
    sort(a.begin(), a.end());
    vector<int> b;
    for(int i =0;i<n;i++){
        if(i==0||a[i]==a[i-1]){
            b.push_back(a[i]);
        }
        else{
            break;
        }
    }
    if(n-(b.size())>=1){
        cout<<b.size()<<" "<<n-b.size()<<nl;
        for(int i =0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<nl;
        //cout<<n-b.size()<<nl;
        for(int i =b.size();i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<nl;
    }
    else{
        cout<<"-1"<<nl;
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
