#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<pair<int,int> > vec;
    int u,v;
    for(int i=0;i<5;i++){
        cin>>u>>v;
        vec.push_back(make_pair(u,v));
    }
    for(int i=0;i<vec.size();i++){

            cout<<vec[i].first<<" "<<vec[i].second;

    }

}
