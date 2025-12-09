#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)

void solve(){
    int answer =0;
    for(int i =0;i<10;i++){
        string s;
        cin>>s;
        for(int j=0;j<10;j++){
            if(s[j]=='X'){
                int mini = min(9-j,j);
                int mini2 = min(9-i,i);
                //cout<<"i: "<<i<<" j: "<<j<<" mini: "<<mini<<" mini2: "<<mini2<<endl;
                answer+= min(mini,mini2)+1;
            }
        }
    }
    cout<<answer<<endl;
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
