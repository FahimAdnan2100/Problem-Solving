#include <bits/stdc++.h>
using namespace std;

int main()
{
    float process;
    float sum=0,b=0,k=1,dd=0;
    cin>>process;
    float a[10],ff[10][10];
    vector<int>vec[10];
    for(int i=0; i<process; i++)
    {
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
    }
    /*for(int i=1; i<=process; i++)
    {
       a[i]=0;
    }*/
    for(int i=0; i<=process; i++)
    {
        for(int j=0; j<vec[i].size(); j++)
        {
             sum = sum+vec[i][j];
             cout<<"p"<<k<<" Turn Around Time "<<sum<<" & "<<" waiting Time "<<sum-vec[i][j] <<endl;
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
5
1 10
2 5
3 8
4 7
5 5

*/
/*
5
0 3
0 5
0 9
3 4
2 1

*/

