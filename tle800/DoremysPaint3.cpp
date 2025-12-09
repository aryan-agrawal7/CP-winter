#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e9+7
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    set<int> s;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
        m[a[i]]++;
    }
    if(s.size()>2){
        cout<<"NO\n";

    }
    else if(s.size()==1){
        cout<<"YES\n";
    }
    else{
        for(auto it:s){
            if(m[it]<n/2){
                cout<<"NO\n";
                return;
            }
        }
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