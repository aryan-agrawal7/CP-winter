#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)

void solve(){
    int n;
    cin>>n;
    int mini = INF;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        mini = min(mini, abs(x));
    }
    cout<<mini<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}
