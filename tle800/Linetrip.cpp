#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e9+7
void solve(){
    int n,m;
    cin>>n>>m;
    int mini = -INF;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0) mini = a[i];
        else mini = max(mini,a[i]-a[i-1]);
    }
    mini = max(mini, 2 * (m - a[n-1]));
    cout<<mini<<endl;
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