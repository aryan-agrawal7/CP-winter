#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n;
    cin>>n;
    int answer =0;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(i==0) answer=x;
        else{
            answer = answer ^ x;
        }
    }
    if(n%2==0){
        if(answer==0){
            cout<<0<<nl;
        }
        else{
            cout<<-1<<nl;
        }
    }
    else{
        cout<<answer<<nl;
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
