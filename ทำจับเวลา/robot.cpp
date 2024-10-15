#include<bits/stdc++.h>	
using namespace std;	
#define pii pair<int,int>
const int N = 2000;	
int n, m;	char board[N+5][N+5];	
int dir[2][4] = {		
    {1,0,-1,0},		
    {0,1,0,-1}	};	
bool vis[N+5][N+5];	queue<pii> q;	vector<pii> gogo;	
int main(){		
    ios_base::sync_with_stdio(0); 
    cin.tie(0);		
    cin>>n>>m;		
    for(int i=1;i<=n;i++){		
    cin>>board[i]+1;	
    for(int j=1;j<=m;j++){	
    if(board[i][j] == 'X'){					
        q.push({i,j});			
        }			
    }		
    }		
    int w = 0, cnt=0, ans=0;		
    while(!q.empty()){			
        int sz = q.size();			
        for(int _=0;_<sz;_++){				
            int i = q.front().first, j = q.front().second; q.pop();				
            if(vis[i][j]) continue;				
            vis[i][j] = 1;				
        if(board[i][j] == 'A'){					
        ans += w;					
        cnt++;				
    }				
    for(int k=0;k<4;k++){				
        int ni = i+dir[0][k], nj = j+dir[1][k];					
        if(1<=ni && ni<=n && 1 <= nj && nj <= m && !vis[ni][nj] && board[ni][nj] != 'W'){
    	q.push({ni,nj});
        }				
    }			
    }			
    w +=2;		
    }		
    cout<<cnt<<" "<<ans;	
    }