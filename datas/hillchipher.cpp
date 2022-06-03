#include<bits/stdc++.h>
using namespace std;
int main(){

    int j=0;
    string alh_s[26];
    string alh_c[26];
    for(int i=97;i<26+97;i++){

        alh_s[j] = i;
        j++;

    }
    j=0;
    for(int i=65;i<26+65;i++){

        alh_c[j] = i;
        j++;

    }
    for(int i=0;i<26;i++){
        cout<<alh_c[i]<<" ";

    }
    string s;

    cin>>s;
    int st[26];
    j=0;
    for(int i=65;i<26+65;i++){
        alh_s[i]=j;
        j++;
    }
    for(int i=65;i<26+65;i++){
        cout<<alh_s[i]<<" ";
    }







}

