// 16.56 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    for(int x=0;x<n;x++){
    bool ck=true;
    char a[m][m];
    set<char>s1,s2,s3,s4;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            s1.insert(a[i][j]);
            s2.insert(a[j][i]);
            s3.insert(a[i][j]);
            s4.insert(a[j][i]);
        }
        if(s1.size()!=m||s2.size()!=m) ck=false;
        s1.clear();s2.clear();
        if(s3!=s4||s3.size()!=m||s4.size()!=m) ck=false;
    }
    if(ck) cout<<"Y"<<"\n";else cout<<"N\n";
}
    
    return 0;
}
/*
1 9
9 2 3 8 1 6 4 5 7
4 7 1 3 2 5 9 6 8
5 8 6 9 7 4 1 2 3
1 4 9 5 3 8 6 7 2
6 5 7 4 9 2 3 8 1
2 3 8 7 6 1 5 4 9
3 9 2 6 4 7 8 1 5
8 1 4 2 5 9 7 3 6
7 6 5 1 8 3 2 9 4

output :

Y
*/
/*
4 3
3 4 5
4 5 3
5 3 4
* * *
* * *
* * *
B C A
A B C
C A T
B C A
A B C
C A B

output : 

Y
N
N
Y
*/