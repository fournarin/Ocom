#include <bits/stdc++.h>	
using namespace std;	
int main()	{	 
    int pos,n,tap;
    string a[9]={"0","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"},ans;	 
    cin >> n;
    cin >> pos >> tap;	
    n--;	  
    if(pos-1)ans+=a[pos-1][(tap-1)%a[pos-1].size()];
    while(n--){	    
        int x,y;	 
        cin >> x >> y >> tap;
        pos+=x;	    
        pos+=y*3;	  
        while(!(pos-1)&&!ans.empty()&&tap--) ans.pop_back();	      
        if(pos-1)ans+=a[pos-1][(tap-1)%a[pos-1].size()];	
        }	   
        if(ans.empty())cout << "null";
        else cout << ans;	   
    return 0;
    }