#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)

void solve(){
    int n;
    cin>>n;
    int sumn =0;
    for(int i =0;i<n-1;i++){
        int x;
        cin>>x;
        sumn+=x;
    }
    cout<<-sumn<<endl;
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
