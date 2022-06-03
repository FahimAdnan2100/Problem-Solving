#include<bits/stdc++.h>
using namespace std;
int main(){
    int key;
    int a[100],b[100];
    string s,s1,s2;
    cin>>s;
    cin>>key;
    //cout<<s.size();
    cout<<"Encryption: ";
    for(int i=0;i<s.size();i++){
        a[i]=s[i];
        //a[i]=a[i];
        s1[i]=a[i]+key;
        cout<<s1[i];
        //cout<<a[i]<<" ";
    }
    cout<<endl<<"Decryption: ";
    for(int i=0;i<s.size();i++){
        b[i]=s1[i];
        //a[i]=a[i];
        s2[i]=b[i]-key;
        cout<<s2[i];
        //cout<<a[i]<<" ";
    }






}

