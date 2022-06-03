#include <iostream>

using namespace std;



#include <bits/stdc++.h>

using namespace std;

int main()
{
    int process;
    cin>>process;
    vector<int>vec[process];
    for(int i=0;i<process;i++){
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
    }

}

/*
3
0 24
1 3
2 4
*/
