#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){
            if(i!=0) b[i] = b[i-1]+1;
            else b[i] = 1;
        }
        else{
            if(i!=0) b[i] = b[i-1];
            else b[i] = 0;
        }
    }
    int lol = b[n-1];
    if(lol%2==1){
        cout<<-1<<nl;
        return;
    }
    lol/=2;
    for(int i =0;i<n;i++){
        if(b[i]==lol){
            cout<<i+1<<nl;
            return;
        }
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
