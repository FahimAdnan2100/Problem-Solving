#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){

    int s[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int ss[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int arr[100];
    string str;
    cin>>str;
    for(int i=0;i<26;i++){
        s[i] = i;
    }
    int j=0;
    for(int i=0;i<str.length();i++){
        if(ss[i]==str[i]){

            arr[j]=s[i];
        j++;
        }
    }
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }




}

