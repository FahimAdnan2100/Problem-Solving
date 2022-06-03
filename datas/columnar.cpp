#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p,k;
    string s= {"abcdefghijklmnopqrstuvwxyz"};
    cin>>p>>k;
    int pl = p.length();
    int kl = k.length();
    int row = ceil((double)pl/kl);
    string m[kl+1][row+1];
    int c=0;
    cout<<k<<endl;
    cout<<"_____"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<kl; j++)
        {
            m[i][j]=p[c];
            c++;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    c=0;
    int ww;
    //s={"baust"};
    //sort(s[0],s+kl);
    for(int kk=0; kk<s.length(); kk++)
    {
        for( ww=0; ww<kl; ww++)
        {
            if(s[kk]==k[ww])
            {
                for(int i=ww; i<ww+1; i++)
                {
                    for(int j=0; j<kl; j++)
                    {
                        cout<<m[j][i]<<" ";
                    }
                    //cout<<endl;
                }break;
            }
        }



    }





}





/*
bangladesharmyuniversity
baust
*/






