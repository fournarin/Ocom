// 7.41 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c;cin>>c;int n;cin>>n;int w;cin>>w;int l;cin>>l;
    for(int x=0;x<=l;x++){
    for(int i=0;i<n+n+1;i++){
        for(int j=0;j<w;j++){
            int m=abs(x-j)%(n+n+1);
            if(i+m>=n&&i-m<=n&&i+m<=3*n&&m-i<=n) cout<<c;
            else cout<<".";
        }
        cout<<"\n";
    }}
    return 0;
}
/*
X
4
30
5

output :

....X........X........X.......
...XXX......XXX......XXX......
..XXXXX....XXXXX....XXXXX....X
.XXXXXXX..XXXXXXX..XXXXXXX..XX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
.XXXXXXX..XXXXXXX..XXXXXXX..XX
..XXXXX....XXXXX....XXXXX....X
...XXX......XXX......XXX......
....X........X........X.......
.....X........X........X......
....XXX......XXX......XXX.....
...XXXXX....XXXXX....XXXXX....
X.XXXXXXX..XXXXXXX..XXXXXXX..X
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
X.XXXXXXX..XXXXXXX..XXXXXXX..X
...XXXXX....XXXXX....XXXXX....
....XXX......XXX......XXX.....
.....X........X........X......
......X........X........X.....
.....XXX......XXX......XXX....
X...XXXXX....XXXXX....XXXXX...
XX.XXXXXXX..XXXXXXX..XXXXXXX..
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XX.XXXXXXX..XXXXXXX..XXXXXXX..
X...XXXXX....XXXXX....XXXXX...
.....XXX......XXX......XXX....
......X........X........X.....
.......X........X........X....
X.....XXX......XXX......XXX...
XX...XXXXX....XXXXX....XXXXX..
XXX.XXXXXXX..XXXXXXX..XXXXXXX.
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXX.XXXXXXX..XXXXXXX..XXXXXXX.
XX...XXXXX....XXXXX....XXXXX..
X.....XXX......XXX......XXX...
.......X........X........X....
X.......X........X........X...
XX.....XXX......XXX......XXX..
XXX...XXXXX....XXXXX....XXXXX.
XXXX.XXXXXXX..XXXXXXX..XXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXX.XXXXXXX..XXXXXXX..XXXXXXX
XXX...XXXXX....XXXXX....XXXXX.
XX.....XXX......XXX......XXX..
X.......X........X........X...
.X.......X........X........X..
XXX.....XXX......XXX......XXX.
XXXX...XXXXX....XXXXX....XXXXX
XXXXX.XXXXXXX..XXXXXXX..XXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXX.XXXXXXX..XXXXXXX..XXXXXX
XXXX...XXXXX....XXXXX....XXXXX
XXX.....XXX......XXX......XXX.
.X.......X........X........X..

*/
/*
o
3
50
6

output :
...o......o......o......o......o......o......o....
..ooo....ooo....ooo....ooo....ooo....ooo....ooo...
.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..
oooooooooooooooooooooooooooooooooooooooooooooooooo
.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..
..ooo....ooo....ooo....ooo....ooo....ooo....ooo...
...o......o......o......o......o......o......o....
....o......o......o......o......o......o......o...
...ooo....ooo....ooo....ooo....ooo....ooo....ooo..
o.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..ooooo.
oooooooooooooooooooooooooooooooooooooooooooooooooo
o.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..ooooo.
...ooo....ooo....ooo....ooo....ooo....ooo....ooo..
....o......o......o......o......o......o......o...
.....o......o......o......o......o......o......o..
o...ooo....ooo....ooo....ooo....ooo....ooo....ooo.
oo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..ooooo
oooooooooooooooooooooooooooooooooooooooooooooooooo
oo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..ooooo
o...ooo....ooo....ooo....ooo....ooo....ooo....ooo.
.....o......o......o......o......o......o......o..
o.....o......o......o......o......o......o......o.
oo...ooo....ooo....ooo....ooo....ooo....ooo....ooo
ooo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..oooo
oooooooooooooooooooooooooooooooooooooooooooooooooo
ooo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..oooo
oo...ooo....ooo....ooo....ooo....ooo....ooo....ooo
o.....o......o......o......o......o......o......o.
.o.....o......o......o......o......o......o......o
ooo...ooo....ooo....ooo....ooo....ooo....ooo....oo
oooo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..ooo
oooooooooooooooooooooooooooooooooooooooooooooooooo
oooo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..ooo
ooo...ooo....ooo....ooo....ooo....ooo....ooo....oo
.o.....o......o......o......o......o......o......o
..o.....o......o......o......o......o......o......
.ooo...ooo....ooo....ooo....ooo....ooo....ooo....o
ooooo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..oo
oooooooooooooooooooooooooooooooooooooooooooooooooo
ooooo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..oo
.ooo...ooo....ooo....ooo....ooo....ooo....ooo....o
..o.....o......o......o......o......o......o......
...o.....o......o......o......o......o......o.....
..ooo...ooo....ooo....ooo....ooo....ooo....ooo....
.ooooo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..o
oooooooooooooooooooooooooooooooooooooooooooooooooo
.ooooo.ooooo..ooooo..ooooo..ooooo..ooooo..ooooo..o
..ooo...ooo....ooo....ooo....ooo....ooo....ooo....
...o.....o......o......o......o......o......o.....
*/