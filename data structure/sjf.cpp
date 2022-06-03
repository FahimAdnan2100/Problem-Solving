#include <iostream>
using namespace std;
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int process;
    double sum=0,b=0,k=1,dd=0;
    cin>>process;
    int a[10],ff[10][10];
    vector<int>vec[10];
    //vector<int>vec1[10];
    for(int i=0; i<process; i++)
    {
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        //vec1[v].push_back(u);
    }
    for(int i=1; i<=process; i++)
    {
       a[i]=0;
    }
    //sort(vec[0].begin(),vec[0].end(),greater<int>());

    sort(vec+1,vec+process+1);
    //sort(vec1+1,vec1+process+1);
    for(int i=1; i<=process; i++)
    {

        //cout<<vec[i][0]<<" ";
        for(int j=0; j<vec[i].size(); j++)
        {
            //cout<<vec[i][j]<<" ";
             sum = sum+vec[i][j];
             cout<<"p"<<vec[i].at(i)<<" process "<<" Turn Around Time "<<sum<<" & "<<" waiting Time "<<sum-vec[i][j] <<endl;
             a[i]=sum-vec[i][j];
             dd=dd+a[i];
             k++;
        }
    }
    cout<<"The Average waiting time : (";
    for(int i=1; i<=process; i++)
    {
        cout<<a[i];
        b=b+a[i];
        if(i<process)
        {
            cout<<"+";
        }
    }
    cout<<") / "<<process <<" = "<<dd/process<<endl;

}

/*
3
1 10
2 5
3 8

*/
