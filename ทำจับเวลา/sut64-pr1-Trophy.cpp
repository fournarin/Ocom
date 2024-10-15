// ประมาณ 17 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;int n;cin>>n;
    for(int x=0;x<s.length();x++){
    for(int i=0 ;i<n;i++){
        for(int y=0;y<x;y++){
        for(int j=0;j<n;j++){
            cout<<".";
        }
        }
        for(int y=x;y<s.length();y++){
        for(int j=0;j<n+n;j++){
            if(i<=j&&i+j<=n+n-2) cout<<s[x];
            else cout<<".";
        }
        }
        for(int y=0;y<x;y++){
        for(int j=0;j<n;j++){
            cout<<".";
        }
        }
        cout<<"\n";
    }}
    return 0;
}
/*
WIN
1

output :

W.W.W.
.I.I..
..N...
*/
/*
Trophy
3

output :

TTTTT.TTTTT.TTTTT.TTTTT.TTTTT.TTTTT.
.TTT...TTT...TTT...TTT...TTT...TTT..
..T.....T.....T.....T.....T.....T...
...rrrrr.rrrrr.rrrrr.rrrrr.rrrrr....
....rrr...rrr...rrr...rrr...rrr.....
.....r.....r.....r.....r.....r......
......ooooo.ooooo.ooooo.ooooo.......
.......ooo...ooo...ooo...ooo........
........o.....o.....o.....o.........
.........ppppp.ppppp.ppppp..........
..........ppp...ppp...ppp...........
...........p.....p.....p............
............hhhhh.hhhhh.............
.............hhh...hhh..............
..............h.....h...............
...............yyyyy................
................yyy.................
.................y..................

*/