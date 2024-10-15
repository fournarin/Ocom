#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>k;
    int n; cin>>n;
    int a[n][n];
    char b[n];
    for(int i=0;i<k;i++){
    int sum1=0,sum2=0;
    set<int>s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c ;
            cin>>c;
            a[i][j]=int(c);
        }
    }
    bool r=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum1+=a[i][j];
            sum2+=a[j][i];
            s.insert(a[i][j]);
        }
        if(sum1!=sum2) r=false;
    if(s.size()!=n) r=false;
    }
    if(r) cout<<"Y\n";
    else cout<<"N\n";
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
*/