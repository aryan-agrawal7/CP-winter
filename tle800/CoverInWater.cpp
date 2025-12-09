#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e9+7
void solve(){
    int n;
    string s;
    cin>>n>>s;
    int curr = 0;
    bool flag = false;
    int total = 0;
    for(int i =0;i<n;i++){
        if(s[i]=='.') curr++;
        else{
            if(curr>2){
                flag = true;
                break;
            }
            else{
                total+= curr;
            }
            curr =0;
        }
    }
    if(curr>2){
        flag = true;
    }
    else{
        total+= curr;
    }
    curr =0;
    if(flag){
        cout<<2<<endl;
    }
    else{
        cout<<total<<endl;
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