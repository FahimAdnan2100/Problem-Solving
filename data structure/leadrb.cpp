#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>p;
    vector<int>ranked;
    queue<int>player;

    vector<int>::iterator ip,it;
    int m,n,u,v,value;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>u;
        ranked.push_back(u);
    }
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v;
        player.push(v);
    }

    ip=unique(ranked.begin(),ranked.begin()+m);
    ranked.resize(distance(ranked.begin(),ip));

    for(ip=ranked.begin(); ip!=ranked.end(); ip++)
    {
        value=*ip;
        p.push(value);
    }
    //cout<<player.front();
    while(!player.empty())
    {

        if(p.top()>player.front())
        {
            p.push(player.front());
            cout<<p.size()<<endl;

            player.pop();if(p.size()==1){
                cout<<p.size()<<endl;;
            }
        }
        else
        {

            p.pop();

        }
        if(player.size()==1){
            cout<<p.size();
        }



    }
    //cout<<"1";






}
