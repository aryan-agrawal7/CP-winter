#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    b.push_back(a[0]);
    for(int i =1;i<n;i++){
        if(a[i]>=a[i-1]){
            b.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
            b.push_back(a[i]);
        }
    }
    cout<<b.size()<<endl;
    for(int i =0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
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
