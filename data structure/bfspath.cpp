#include <iostream>
using namespace std;
#include <bits/stdc++.h>



using namespace std;

int main()
{
    int sn=0,en=7
    ,a[100][100],ss;
    vector<int>vec[100];
    queue<int>q[100];
    queue<int>t[100];
    int node,edge,u,v,g;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    cout<<endl<<" GRAPH "<<endl;
    for(int i=0; i<node; i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" -> ";
            a[i][vec[i][j]]=1;
        }
        cout<<endl;
    }

    cout<<endl<<" MATRIX "<<endl;
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            if(a[i][j] == 1)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }


    for(int i=sn; i<node; i++)
    {
        for(int j=0; j<vec[i].size(); j++)
        {
            q[i].push(vec[i][j]);
            t[i].push(vec[i][j]);



        }
    }

    /* for(int i=0;i<12;i++){
         while(!q[i].empty()){
             cout<<i<<"->"<<q[i].front()<<endl;
             q[i].pop();
         }
     }*/


    for(int i=0; i<=11; i++)
    {

        while(!q[i].empty())
        {

            if(q[i].front()==en)
            {
                ss=q[i].front();
                cout<<""<<ss<<"->";

                while(!t[ss].empty())
                {
                    cout<<""<<t[ss].front()<<"->";
                    t[ss].pop();

                    if(!t[ss].size()==1)
                    {
                        ss--;
                        //ss=t[ss].front();
                        cout<<endl;
                    }


                }

                break;

            }
            else
            {
                //cout<<""<<q[i].front()<<"->";
                // t[i].push(q[i].front());
                q[i].pop();
            }



        }
    }
    int snn=sn;
    while(!t[snn].empty())
    {

        if(t[snn].front()==en)
        {
            //cout<<""<<t[snn].front()<<"->";
            //int snn=t[snn].front();
        }
        else
        {
            //cout<<""<<t[snn].front()<<"->";
            t[snn].pop();

        }


    }



}

/*
3
1 10
2 5
3 8

*/

/*
9 11
0 1
0 2
0 3
0 4
0 5
4 6
5 6
5 7
6 7
6 8
8 7
*/
