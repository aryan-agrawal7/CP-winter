#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e9+7
void solve(){
    int n;
    cin>>n;
    if(n%3==1 || n%3==2){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
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