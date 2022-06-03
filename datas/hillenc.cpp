#include<bits/stdc++.h>
using namespace std;
int main()
{
    const int SIZE = 100;
    /*babceadfg*/
    char ss[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int a[SIZE],k=0,c=0;
    string s;
    cout<<"Enter Key: ";
    cin>>s;
    int arr[SIZE],ar[SIZE];
    int arr1[SIZE],ar1[SIZE];
    int j=0;
    cout<<"Key Length: ";
    c=s.length();
    cout<<c<<endl;
    cout<<endl<<"Key Numeric Value: "<<endl;
    for(int i=0; i<c; i++)
    {
        for(k=0; k<26; k++)
        {
            if(s[i]==ss[k])
            {
                cout<<ss[k]<<" ";
                arr[j]=ss[k];
                ar[j]=abs(97-arr[j]);
                j++;
            }

        }
        k=0;
    }
    cout<<endl;
    //cout<<c<<endl;

    for(int i=0; i<c; i++)
    {
        cout<<abs(ar[i])<<" ";
    }
    cout<<endl;
    int q[SIZE][SIZE];
    int qk[SIZE][SIZE];
    int sq = sqrt(c);
    //cout<<sq;
    int pp=0;
    cout<<endl<<"n*n Matrix: "<<endl;
    for(int i=0; i<sq; i++)
    {
        for(int j=0; j<sq; j++)
        {
            q[i][j]=abs(ar[pp]);
            pp++;
        }
    }
    for(int i=0; i<sq; i++)
    {
        for(int j=0; j<sq; j++)
        {
            cout<<q[i][j]<<" ";
        }
        cout<<endl;
    }
    string key;
    cout<<endl<<"Enter Message: ";
    cin>>key;
    j=0;
    int le = key.length();
    cout<<"Message Vector form: "<<endl;
    for(int i=0; i<le; i++)
    {
        for(k=0; k<26; k++)
        {
            if(key[i]==ss[k])
            {
                //cout<<ss[k]<<" ";
                arr1[j]=ss[k];
                ar1[j]=97-arr1[j];
                j++;
            }

        }
        k=0;
    }

    for(int i=0; i<le; i++)
    {
        for(int j=0; j<1; j++)
        {
            qk[i][j]=abs(ar1[i+j*2]);
        }
    }
    for(int i=0; i<le; i++)
    {
        for(int j=0; j<1; j++)
        {
            cout<<qk[i][j]<<" ";
        }
        cout<<endl;
    }
    int res[SIZE],temp,sum=0;
    cout<<endl<<"Matrix Multiplication: "<<endl;
    for(int i=0; i<sq; i++)
    {
        for(int j=0; j<sq; j++)
        {
            for(int k=0; k<1; k++)
            {
                temp =q[i][j]*qk[j][k];
                sum = sum+temp;
            }

        }
        res[i]=sum;
        sum=0;

    }
    for(int i=0; i<3; i++)
    {
        cout<<res[i]<<" ";
    }
    int cip[SIZE];
    cout<<endl<<endl<<"Mod by 26: ";
    for(int i=0; i<3; i++)
    {
        cip[i] = res[i]%26;
    }
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<cip[i]<<" ";
    }
    string sss;
    for(int i=0; i<3; i++)
    {
        sss[i] = cip[i]+97;
    }
    cout<<endl;
    cout<<endl<<"Cipher Text: ";
    for(int i=0; i<3; i++)
    {
        cout<<sss[i];
    }
    cout<<endl<<endl;






}

/*
gybnqkurp
act

babceadfg
abc

hillmagic
gfg
*/
