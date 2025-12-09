#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(x==1){
        if(n==1){
            cout<<"NO"<<nl;
            return;
        }
        if(n%2==0 && k>=2){
            cout<<"YES"<<nl;
            cout<<n/2<<nl;
            for(int i =0;i<n/2;i++){
                cout<<"2 ";
            }
            cout<<nl;
        }
        else if(n%2==1 && k>=3){
            cout<<"YES"<<nl;
            cout<<((n-3)/2)+1<<nl;
            cout<<"3 ";
            for(int i =1;i<=((n-3)/2);i++){
                cout<<"2 ";
            }
            cout<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
    }
    else{
        cout<<"YES"<<nl;
        cout<<n<<nl;
        for(int i =0;i<n;i++){
            cout<<"1 ";
        }
        cout<<nl;
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
