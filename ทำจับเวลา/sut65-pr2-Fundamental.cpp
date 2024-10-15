//  7.12 นาที    ทำต่อถึง  32.53 คิดว่ายังช้าไป
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m=0; cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        m=max(m,x[i]);
    }
    vector<int>p(m+2,0);
    for(int i=2;i<=m;i++){
        if(p[i]==0){
            for(int j=i;j<=m;j+=i) p[j]++;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<p[x[i]]<<"\n";
    }
    return 0;
}
/*

2
100
1000

output :
4
6

*/
/*

3
1999998761
1999999967
1999999999
 
 output :
 1
 4
 2
 
*/