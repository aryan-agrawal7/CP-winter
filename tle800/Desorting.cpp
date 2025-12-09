#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int mini = INT_MAX;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =1;i<n;i++){
        int curr = a[i]-a[i-1];
        if(curr<0){
            cout<<0<<nl;
            return;
        }
        mini = min(mini, curr);
    }
    if(mini%2==0){
        cout<<(mini/2)+1<<nl;
    }
    else{
        cout<<(mini+1)/2<<nl;
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
