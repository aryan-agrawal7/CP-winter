#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    string s ;
    cin>>s;
    int n = s.length();
    int answer = (n-1)*9;
    answer += (s[0]-'0');
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
