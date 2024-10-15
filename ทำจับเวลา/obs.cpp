#include <bits/stdc++.h>
using namespace std;
const int N = 2e3 + 1;
int n,m,k;
int arr[N][N] , dp[N][N] , tri[N][N] , ans = -2e9;	
void solve() {	   
    for(int i=1;i<=n;i++) {	
        for(int j=1;j<=m;j++) {	
            dp[i][j] = arr[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];	            
            tri[i][j] = tri[i-1][j-1] + dp[i][j] - dp[i-1][j];	        
        }	        
    }	   
    for(int i=k;i<=n;i++) {	
        for(int j=k;j<=m;j++) {	
            ans = max(ans, tri[i][j] + dp[i-k][j-k] - dp[i][j-k] - tri[i-k][j-k]);
        }	   
    }
}	
int main() {
    ios_base::sync_with_stdio(false);	
    cin.tie(nullptr);
    cout.tie(nullptr);	 
    cin >> n >> m >> k;	  
    for(int i=1;i<=n;i++) {	 
        for(int j=1;j<=m;j++) {	  
            cin >> arr[i][j];	    
            }	    
        }	  
    solve();	
    for(int i=1;i<=n;i++) reverse(arr[i]+1, arr[i]+1+m);
    solve();	  
    cout << ans;
    return 0;
}