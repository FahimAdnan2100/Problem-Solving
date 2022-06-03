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

    //paintext
    string s1;
    cin>>s1;
    cout<<endl<<"Plain Text Numeric Value: "<<endl;
    j=0;
    for(int i=0; i<c; i++)
    {
        for(k=0; k<26; k++)
        {
            if(s1[i]==ss[k])
            {
                cout<<ss[k]<<" ";
                arr1[j]=ss[k];
                ar1[j]=abs(97-arr1[j]);
                j++;
            }

        }
        k=0;
    }
    cout<<endl;
    //cout<<c<<endl;

    for(int i=0; i<c; i++)
    {
        cout<<abs(ar1[i])<<" ";
    }
    cout<<endl;

    int sum[SIZE];
    cout<<endl<<"Add : "<<endl;
    for(int i=0;i<c;i++){
        sum[i]=(ar[i]+ar1[i])%26;
        cout<<sum[i]<<" ";
    }
    char ans[SIZE];
    cout<<endl<<endl<<"Cipher Text: "<<endl;
    for(int i=0;i<c;i++){
        ans[i]=sum[i]+97;
        cout<<ans[i]<<" ";
            }



}

/*
nhell
hello
*/

