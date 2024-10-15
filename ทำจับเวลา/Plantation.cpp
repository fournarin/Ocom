#include<bits/stdc++.h>	
using namespace std;	
long long distsq(long long x1, long long x2, long long y1, long long y2){	  return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);	}	
void solve(){	 
    long long n,r,d;	 
    cin >> n >> r >> d;	 
    long long mindistsq=(d+r+r)*(d+r+r);	
  vector<pair<int,int>> tree;
  for(int i=0;i<n;i++){	   
      int x,y;	   
      cin >> x >> y;
      tree.push_back({x,y});
      }	
  sort(tree.begin(),tree.end());
  for(int i=0;i<n;i++){	   
      for(int j=i+1;j<n;j++){
          if(tree[j].first-tree[i].first>=(d+r+r)||tree[i].second-tree[j].second<=(-d-r-r)){break;}	
          if(distsq(tree[i].first,tree[j].first,tree[i].second,tree[j].second)<mindistsq){
    cout << "N\n";return;	
          }	 
        }
    }	  
    cout << "Y\n";
}	
int main(){	 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;	
    cin >> tt;
    while(tt--){	
        solve();	
    }	  
return 0;}
