#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(gcd(a[i],a[j])<=2){
                cout<<"YES"<<nl;
                return;
            }
        }
    }
    cout<<"NO"<<nl;
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
