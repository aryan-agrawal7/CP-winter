#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)

void solve(){
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    
    string curr = s1;
    for(int i = 1; i <= 6; i++){
        if(curr.find(s2) != string::npos){
            cout<<i-1<<endl;
            return;
        }
        curr += curr;
        //cout<<"curr: "<<curr<<endl;
    }
    cout<<-1<<endl;
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
