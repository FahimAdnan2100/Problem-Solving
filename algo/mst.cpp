#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge,n,m,w;

    cin>>node>>edge;
    vector<int>vec[edge];

    for(int i=0; i<edge; i++)
    {
        cin>>n>>m>>w;
        vec[n].push_back(m);
        vec[m].push_back(n);
    }

     for(int i=0; i<edge; i++)
    {

        for(int j=0; j<vec[i].size(); j++)
        {

            cout<<i<<" - "<<vec[i][j]<< " : ";
        }
        cout<<endl;

    }







}

/*
9 14
0 1 4
0 7 8
1 7 11
1 2 8
7 8 7
7 6 1
2 8 2
8 6 6
2 5 4
2 3 7
3 5 14
3 4 9
5 4 10
6 5 2

*/



