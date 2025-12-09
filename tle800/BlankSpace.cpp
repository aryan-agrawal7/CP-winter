#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n;
    cin>>n;
    int answer = -1;
    int curr =0;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            curr++;
            answer = max(answer,curr);
        }
        else{
            curr =0;
        }
    }
    cout<<max(answer,0)<<nl;
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
