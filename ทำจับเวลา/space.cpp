#include <bits/stdc++.h>	
using namespace std;	
bool a[1009][1009];
int n, m, dx[]={-1,0,1,0}, dy[]={0,-1,0,1}, P=0, S=0, C=0;
queue<pair<int,int>> q;	
int main() {	
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> m;	
    for (int i = 0; i < m; i++) {	
        string s;		
        cin >> s;		
        for (int j = 0; j < n; j++) a[i][j] = s[j]-'0';	
        }	
    for (int i = 0; i < m; i++) {	
        for (int j = 0; j < n; j++) {	
            if (!a[i][j]) continue;		
            q.push({i, j});		
            a[i][j] = 0;	
            int area=1, mxy=0, mny=m, mxx=0, mnx=n;	
        while (!q.empty()) {				
            auto [y,x]=q.front(); q.pop();	
            mxy = max(mxy, y), mxx = max(mxx, x);	
            mny = min(mny, y), mnx = min(mnx, x);
            for (int i = 0; i < 4; i++) {		
                int yy=y+dy[i], xx=x+dx[i];		
                if (yy < 0 || yy >= m || xx < 0 || xx >= n) continue;
                if (a[yy][xx] == 0) continue;				
                a[yy][xx] = 0, area++;				
                q.push({yy, xx});				
            }		
        }			
        int h=mxy-mny+1, w=mxx-mnx+1;	
        if (h != w) C++;			
        else {				
            if (area == h*w) P++;	
            else S++;			
        }		
    }	
    }	
    cout << P<<" "<<S<<" "<<C;	
    return 0;
    }