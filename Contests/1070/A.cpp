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
    vector<bool> can(n,false);
    int answer =0;
    for(int i =0;i<n;i++){
        for(int j = 0;j<i;j++){
            if(a[j]>a[i]){
                can[i] = true;
                break;
            }
        }
    }
    for(int i =0;i<n;i++){
        //cout<<can[i]<<" ";
        if(can[i]){
            answer++;
        }
    }
    //cout<<nl;
    cout<<answer<<nl;
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
