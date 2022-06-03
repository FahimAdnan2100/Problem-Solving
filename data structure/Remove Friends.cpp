#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t,n,k,j,a,b;
    cin>>t;
    while(t--)
    {list<int>ls;
    list<int>::iterator it;
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            int v;
            cin>>v;
            ls.push_back(v);
        }
        /*for(it = ls.begin(); it!=ls.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;*/

        //cout<<ls.front();
        j=0;
        for(it= ls.begin(); it!=ls.end(); it++)
        {
            if(*it<++*it){
                ls.remove(*it);
            }

        }
        for(it= ls.begin(); it!=ls.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl<<endl;
    }






}

