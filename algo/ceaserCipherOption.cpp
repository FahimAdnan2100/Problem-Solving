#include<bits/stdc++.h>
using namespace std;
int key,coun=0;
int a[100],b[100];
string s,s1,s2,s3,s4,s5;

void input()
{
    cout<<"Enter Plain Text: ";
    cin>>s;
    cout<<"Enter Key: ";
    cin>>key;

}
void encryption()
{

    input();
    cout<<"Cipher Text: ";
    for(int i=0; i<s.size(); i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            a[i]=s[i];
            s3[i]=a[i]+key;
            if((s3[i]>='a' && s3[i]<='z') || (s3[i]>='A' && s3[i]<='Z'))
            {
                s1[i]=a[i]+key;
            }
            else
            {
                s1[i]=a[i]+key-26;
            }

        }
        else
        {
            cout<<"Invalid Input";
            coun++;
            break;
        }
    }
    if(coun==0)
    {
        for(int j=0; j<s.size(); j++)
        {
            cout<<s1[j];
        }

    }
cout<<endl<<endl;


}
void decryption()
{
    //input();
    encryption();
    cout<<endl<<"Plain Text: ";

    if(coun>=1)
    {
        cout<<"Invalid Input";
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            b[i]=s1[i];
            s4[i]=b[i]-key;
            if((s4[i]>='a' && s4[i]<='z') || (s4[i]>='A' && s4[i]<='Z'))
            {
                s1[i]=b[i]-key;
                cout<<s1[i];
            }
            else
            {
                s1[i]=b[i]-key+26;
                cout<<s1[i];
            }
        }
    }
    cout<<"\n\n";


}

int main()
{
    while(1)
    {
        cout<<"\t\t\t Ceaser Cipher Encription & Decription Code\n\n";
        cout<<"press 1 for Encryption\n";
        cout<<"press 2 for Decryption\n";
        cout<<"press 3 for Exit\n";
        cout<<"__________________________________\n\n";

        int n;
        cout<<"Enter Your Option: ";
        cin>>n;
        cout<<endl;

        switch(n)
        {
        case 1:
            encryption();
            break;
        case 2:
            decryption();
            break;

        case 3:
            exit(1);
            break;

        default:
            cout<<"That was an invalid response!\n\n";
            break;
        }
    }

}








