#include<bits/stdc++.h>
using namespace std;

void printPair(pair<int, int> p)
{
    // Gives first element from queue pair
    int f = p.first;

    // Gives second element from queue pair
    int s = p.second;

    cout << "(" << f << ", " << s << ") ";
}


int main(){
int u,v,w,node,path;

queue<pair<int, int> >q[100];
queue<pair<int, int> >temp;

cin>>node>>path;

    for(int i=0;i<path;i++){
            cin>>u>>v>>w;
        q[u].push(make_pair(v,w));
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<q[i].size();j++){
        printPair(q[j].front());
        q[j].pop();
    }
    }



}

/*
9 11
0 1 20
0 2 20
0 3 20
0 4 20
0 5 20
4 6 20
5 6 20
5 7 20
6 7 20
6 8 20
8 7 20
*/
