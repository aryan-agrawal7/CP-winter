#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l =0 ;
    int r = n-1;
    while(l<r){
        if(s[l]==s[r]){
            break;
        }
        else{
            l++;
            r--;
        }
    }
    cout<<r-l+1<<nl;
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
