#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int sum=0;
    string s1;
    cin>>s1;
    int tmp=0;
    for(int i=0;i<s.length();i++){
        for(int j=tmp;j<s1.length();j++){
            if(s[i]==s1[j]){
                sum++;
                tmp=j+1;
                i++;
            }
        }
    }
    cout<<sum<<"\n";
    }
    return 0;
}
/*
KITJAPUK
KITTUANGKITKAT
*/
/*
KITJAPUK044230000
5
KITTUANGPIANGTUR
KITTUANGKITKAT
0K4I4J2A3P0U0K00
156789ZYXWW
!@#$%^&*()_+_)A(*&^%$#@!
*/
/*
PhilippeCoutinho
5
PHILIPPECOUTINHO
philippecoutinho
SADIOMANE
SadioMane
JordanHenderson
*/