#include<bits/stdc++.h>	
using namespace std;	
bool vs[22][22];	
int main(){	  
  ios_base::sync_with_stdio(0); 
  cin.tie(0); 
  	int a[22][22];	    
    int n; cin>>n;	   
    int x,y;	    
    cin>>y>>x;	    
    for(int i=1;i<=n;i++){	        
        for(int j=1;j<=n;j++){	            
            cin>>a[i][j];	            
            if(a[i][j]==100) {vs[i][j]=1;}	        
        }	    
    }	    	    
    int dx[4]={-1,0 ,0,1};	   
    int dy[4]={0 ,-1,1,0};	    
    int mx=a[x][y]; vs[x][y]=1;	    
    queue<pair<int,int> > q;	    
    q.emplace(x,y);	    
    while(!q.empty()){	        
        auto [x,y] = q.front();	        
        q.pop();	       
        mx=max(mx,a[x][y]);	        
        for(int p=0;p<4;p++){	            
            int i=x+dx[p],j=y+dy[p];	            
            if(vs[i][j]||i<1||j<1||i>n||j>n||a[i][j]<=a[x][y]) continue;	            
            vs[x][y]=1; q.emplace(i,j);	        
        }	    
    }
    cout<<mx;	
    return 0;
}