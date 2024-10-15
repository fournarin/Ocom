#include <bits/stdc++.h>	
using namespace std;	
struct node {	
    int up = -1, down = -1, left = -1, right = -1;	};	
struct Q {	
    int u, r, c;
    };
map<pair<int, int>, int> mpp;
bitset<44010> visited;	
int main() {	
    int n, m; scanf("%d%d", &n, &m);
    vector<node> node(n*m);	
    for(int i=0; i<n*m-1; i++) {
        int u, v;
        char tmp; scanf("%d %c %d", &u, &tmp, &v);
        switch(tmp) {			
            case 'U':		
            node[u].down = v;
            node[v].up = u;	
            break;		
            case 'L':		
            node[u].right = v;		
            node[v].left = u;
            break;		
            }	
        }	
    queue<Q> q;	
    q.push({0, n, m});
    while(q.empty()==false) {
        auto now = q.front();	
        q.pop();		
        int src = now.u, row = now.r, col = now.c;	
        mpp[{row, col}] = src;		
        visited[src] = 1;	
        int l = node[src].left, r = node[src].right, u = node[src].up, d = node[src].down;		
        if(l!=-1&&!visited[l]) q.push({l, row, col-1});	
        if(r!=-1&&!visited[r]) q.push({r, row, col+1});	
        if(u!=-1&&!visited[u]) q.push({u, row-1, col});	
        if(d!=-1&&!visited[d]) q.push({d, row+1, col});	
        }		
    int cur = mpp.begin()->first.first;	
    for(auto x: mpp) {		
        if(x.first.first!=cur) printf("\n");
        cur = x.first.first;		
        printf("%d ", x.second);	
    }	
return 0;
}