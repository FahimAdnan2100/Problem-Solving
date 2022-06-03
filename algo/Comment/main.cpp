#include <iostream>

using namespace std;



#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]=="//"){
                cout<<"Comment"<<endl;
        }
        else if(a[i]=="/*" && a[i]=="*/"{
            cout<<"Multi";
        }
    }

}

/*
3
0 10
0 5
0 8

*/
