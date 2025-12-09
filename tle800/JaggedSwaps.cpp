#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e9+7
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int mini = INF;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini = min(mini, a[i]);
    }
    if(a[0]==mini){
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