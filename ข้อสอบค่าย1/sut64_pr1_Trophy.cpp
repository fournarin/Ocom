#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n;
    cin>>s>>n;
    int l=s.length();
    for(int z=0;z<l;z++){
    for(int i=0;i<n;i++){
        for(int x=0;x<z;x++){
            for(int j=0;j<n;j++){
                cout<<".";
            }
        }
        for(int x=z;x<l;x++){
            for(int j=0;j<n*2;j++){
                if(j-i>=0&&i+j<=2*(n-1)) cout<<s[z];
                else cout<<".";
            }
        }
        for(int x=0;x<z;x++){
            for(int j=0;j<n;j++){
                cout<<".";
            }
        }
        cout<<"\n";
    }
    }
    return 0;
}
/*
WIN
1
*/
/*
Trophy
3
*/