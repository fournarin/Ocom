#include<bits/stdc++.h>	
using namespace std;	
int k,a,b;	
void solve(int win,int lose ,string s){
    if(win == k || lose==k){
    cout<< s << "\n";
    return ;	    
    }	
    solve(win+1 , lose , s + " W");
    solve(win , lose+1 , s + " L");
}	
int main(){	
    cin>>k>>a>>b;	
    solve(a,b,"");	
return 0;
}