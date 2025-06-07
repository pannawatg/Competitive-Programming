/*
* Author : Nathlol2
* Created : 2025-06-04 21:35:21 UTC+7
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define sc second
#define inf (int)2e9
#define INF (ll)1e18
#define MOD (ll)1000000007
//998244353

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define vt vector
#define ar array
#define pb push_back
#define eb emplace_back
#define all(arrname) (arrname).begin(), (arrname).end()
#define rall(arrname) (arrname).rbegin(), (arrname).rend()
#define sz(arrname) (int)(arrname).size()

const int d4x[4] = {-1, 0, 1, 0}, d4y[4] = {0, 1, 0, -1};
const int d8x[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8y[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void solve(){
    int n, k;
    cin >> n >> k;
    vt<int> a(n);
    set<int> s[n + 1];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        s[a[i]].insert(x);
    }
    vector<int> c;
    for(int i = 1;i<=n;i++){
        if(!s[i].empty()){
            c.pb(*s[i].begin());
        }
    }
    sort(all(c));
    int ans = 0, pf = 0;
    for(int i = 0;i<sz(c);i++){
        pf += c[i];
        ans = max(ans, (i + 1) * k - pf);
    }
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}