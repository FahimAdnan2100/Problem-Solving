#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p,k,ci,cd;
    cout<<"Enter Plaintext: ";
    cin>>p;
    cout<<"Enter Autokey: ";
    cin>>k;
    int l = p.length();
    int pl[l+1],kl[l+1],sum[l+1];
    cout<<"Ciphertext: ";
    for(int i=0; i<l; i++)
    {
        if((p[i]>='a' && p[i]<='z') || (k[i]>='a' && k[i]<='z'))
        {
            pl[i]=p[i]-97;
            kl[i]=k[i]-97;
            sum[i]=pl[i]+kl[i];
            ci[i]=(sum[i]%26)+97;
            cout<<ci[i];
        }
        else if((p[i]>='A' && p[i]<='Z') || (k[i]>='A' && k[i]<='Z'))
        {
            pl[i]=p[i]-65;
            kl[i]=k[i]-65;
            sum[i]=pl[i]+kl[i];
            ci[i]=(sum[i]%26)+65;
            cout<<ci[i];
        }
    }
    //decryption
    int p2[l+1],k2[l+1],sum1[l+1];
    cout<<endl<<"Plaintext: ";
    for(int i=0; i<l; i++)
    {
        if((ci[i]>='a' && ci[i]<='z') || (k[i]>='a' && k[i]<='z'))
        {
            p2[i]=ci[i]-97;
            k2[i]=k[i]-97;
            sum1[i]=p2[i]-k2[i];
            cd[i]=(sum1[i]%26)+97;
            cout<<cd[i];
        }
        else if((ci[i]>='A' && ci[i]<='Z') || (k[i]>='A' && k[i]<='Z'))
        {
            p2[i]=ci[i]-65;
            k2[i]=k[i]-65;
            sum1[i]=p2[i]-k2[i];
            cd[i]=(sum1[i]%26)+65;
            cout<<cd[i];
        }
    }
}
/*
hEllo
nHelL

GEEKSFORGEEKS
P

hello
nhell

*/
