    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define nl "\n"

    void solve(){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        vector<int> odd;
        vector<int> even;
        for(int i=0; i<n; i++){
            if(a[i]%2==0) even.push_back(a[i]);
            else odd.push_back(a[i]);
        }
        if(odd.empty()){
            for(int i=0; i<n; i++) cout << "0 ";
            cout << nl;
            return;
        }
        sort(even.begin(), even.end(), greater<int>());
        vector<ll> even_prefix(even.size() + 1, 0);
        for(int i=0; i<even.size(); i++){
            even_prefix[i+1] = even_prefix[i] + even[i];
        }
        ll odd_max = -1;
        for(int i=0; i<odd.size(); i++){
            odd_max = max(odd_max, (ll)odd[i]);
        }
        int odd_s = odd.size();
        int even_s = even.size();
        for(int k=1; k<=n; k++){
            int slots_needed = k - 1;
            int take_evens = min(slots_needed, even_s);
            int take_waste = slots_needed - take_evens;
            if(take_waste > odd_s - 1){
                cout << "0 ";
                continue;
            }
            if(take_waste % 2 != 0){
                take_evens--; 
                take_waste++;
            }
            if(take_evens < 0 || take_waste > odd_s - 1) cout << "0 ";
            else {
                cout << odd_max + even_prefix[take_evens]<< " ";
            }
        }
        cout << nl;
    }

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while(t--){
            solve();
        }
    }