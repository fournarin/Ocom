#include<bits/stdc++.h>
using namespace std;
int main(){
    int d ;
    cin>>d;
    int sum=0,m=65,n;
    for(int i=0;i<d;i++)
    {
        char c;
        cin>>c;
        sum+=c-'0';
    }
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        string s;
        cin>>s;
    for(int i=0;i<s.length();i++){
        n=s[i]-'A';
        int k = m+(sum%26)+n;
        if(k>90) k=64+(k%90);
        cout<<char(k);
    }
    cout<<"\n";
    }
    return 0;
}
/*
4
1507
3
LISA
BLINK
BLACKPINK
*/
/*
5
54321
1
THEQUICKBROWNFOXJUMPSOVERTHELAZYDOG
*/