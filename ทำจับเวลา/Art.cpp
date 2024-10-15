#include <bits/stdc++.h>	
using namespace std;	
#define ll long long
#define pi pair<int, int>
#define t3 tuple<int, int, int>	
#define sz(a) ((int) a.size())	
const int mxN = 1e6 + 1;	
struct Fenwick {	
    int t[mxN];	   
    void add(int idx, int val){
        for(; idx < mxN; idx += (idx & -idx))
        t[idx] += val; 
        return;
    }	   
    int query(int idx) { ll ret = 0;
    for(; idx > 0; idx -= (idx & -idx)) 
    ret += t[idx];
    return ret; } 
    } f;	
vector<t3> v;
int n, m; ll ans;	
int bs(int x) {	 
    int l = 1, r = 1e6, ret;
    while(l <= r) {	  
        int md = (l + r) / 2;
        if(f.query(md) <= x) ret = md, r = md - 1;	
        else l = md + 1;
    }	   
return ret;	}	
int main() {	
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;	   
    for(int i = 0, s, h, w, o; i < n; i++) {	 
        cin >> s >> h >> w >> o;
        v.emplace_back(s, h, o); 
        v.emplace_back(s + w, h, -o);	
    }	  
    sort(v.begin(), v.end());
    for(int i = 0; i < 2 * n - 1; i++) {
        auto [p_idx, p_h, p_val] = v[i];
        auto [n_idx, n_h, n_val] = v[i + 1];
        f.add(1, p_val); f.add(p_h + 1, -p_val);
        ans += (n_idx - p_idx) * (bs(m - 1) - bs(m));
        }	   
    cout << ans << '\n';
    return 0;
}