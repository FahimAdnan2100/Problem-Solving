#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t,n,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
        }
        for(int i=0; i<n; i++)
        {
            {
                if(a[i]<b[i])
                {
                    c++;
                    break;

                }
                if(i>=1)
                    {
                        for(int j=0; j<n; j++)
                        {
                            if(a[i]<a[j] || b[i]<b[j]  )//|| a[i]<b[j]
                            {
                                c++;
                                break;
                            }
                        }
                    }
            }


        }

        if(c>=1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            c=0;

    }



}

