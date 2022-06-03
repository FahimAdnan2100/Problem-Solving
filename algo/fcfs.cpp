#include <iostream>

#include <bits/stdc++.h>
using namespace std;

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}


int main()
{
    int process;
    double sum=0,b=0,k=1,dd=0;
    cin>>process;
    int a[10],ff[10][10];
    vector<pair<int,int> >vec[10];
    vector<pair<int,int> >::iterator it;

    for(int i=0; i<process; i++)
    {
        int u,v;
        cin>>u>>v;
        vec[u].push_back(make_pair(u,v));
        //vec[v].push_back(u);
    }
    for(int i=1; i<=process; i++)
    {
       a[i]=0;
    }
    sort(vec[0].begin(),vec[0].end(),sortbysecdesc);
    for(it=vec[0].begin();it!=vec[0].end();it++){
        cout<<*it.first<<" ";
    }

    /*for(int i=0; i<=process; i++)
    {
        //cout<<vec[i].size()<<endl;
        for(int j=0; j<vec[i].size(); j++)
        {
            //cout<<vec[i][j]<<" ";
             sum = sum+vec[i][j].second;
             cout<<"p"<<vec[i][j].first<<" Turn Around Time "<<sum<<" & "<<" waiting Time "<<sum-vec[i][j].second <<endl;
             a[i]=sum-vec[i][j].second;
             dd=dd+a[i];
             k++;
        }
    }
    cout<<"The Average waiting time1 : (";
    for(int i=1; i<=process; i++)
    {
        cout<<a[i];
        b=b+a[i];
        if(i<process)
        {
            cout<<"+";
        }
    }
    cout<<") / "<<process <<" = "<<dd/process<<endl;*/

}

/*
3
1 10
2 5
3 8

*/
/*
5
0 3
0 5
0 9
3 4
2 1

*/
