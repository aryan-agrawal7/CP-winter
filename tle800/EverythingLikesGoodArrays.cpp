#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int prev = 1-(a[0]%2);
    int answer =0;
    for(int i=0;i<n;i++){
        if(a[i]%2 == prev){
            answer++;
        }
        else{
            prev = 1-prev;
        }
    }
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
