#include<bits/stdc++.h>	
using namespace std;	
int main(){	 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    deque<pair<int,int> > dq;
    int n,k;cin>>n>>k;	    
    for(int i=0;i<n;i++){	        
    int p;cin>>p;	        
    while(!dq.empty() && i - dq.front().second > k) dq.pop_front();
    while(!dq.empty() && dq.back().first >= p+dq.front().first) dq.pop_back();
    if(dq.empty()) dq.push_back({p,i});
    else dq.push_back({p+dq.front().first,i});
    }	
    cout << dq.back().first;
    return 0;	
}