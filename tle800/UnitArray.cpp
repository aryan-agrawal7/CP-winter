#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1e9+7)
#define nl "\n"
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int c1 =0;
    int c2 =0;
    for(int i= 0;i<n;i++){
        cin>>a[i];
        if(a[i] == 1) c1++;
        else c2++;
    }
    int answer =0;
    if(c2>c1){
        answer += ((c2-c1)+1)/2;
    }
    if((c2-answer)%2==1){
        answer++;
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
