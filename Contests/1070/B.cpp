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
    s = s+s;
    int answer = 0;
    int count =0;
    for(int i=0;i<2*n;i++){
        if(s[i]=='0'){
            count++;
            answer = max(answer,count);
        }
        else{
            count =0;
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
