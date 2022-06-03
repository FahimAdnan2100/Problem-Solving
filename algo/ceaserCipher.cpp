#include<bits/stdc++.h>
using namespace std;
int main(){
    int key,count=0;
    int a[100],b[100];
    string s,s1,s2,s3,s4,s5;
    cin>>s;
    cin>>key;
    cout<<"Encryption: ";
    for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))  {
            a[i]=s[i];
            s3[i]=a[i]+key;
            if((s3[i]>='a' && s3[i]<='z') || (s3[i]>='A' && s3[i]<='Z')){
                s1[i]=a[i]+key;
            }
            else{
                s1[i]=a[i]+key-26;
            }

        }else{
            cout<<"Invalid Input";
            count++;
            break;
        }
    }
    if(count==0){
        for(int j=0;j<s.size();j++){
        cout<<s1[j];
    }
    }

    cout<<endl<<"Decryption: ";

    if(count>=1){
        cout<<"Invalid Input";
    }
    else{
        for(int i=0;i<s.size();i++){
        b[i]=s1[i];
        s4[i]=b[i]-key;
            if((s4[i]>='a' && s4[i]<='z') || (s4[i]>='A' && s4[i]<='Z')){
                s1[i]=b[i]-key;
                cout<<s1[i];
            }
            else{
                s1[i]=b[i]-key+26;
                cout<<s1[i];
            }
    }
    }









}

