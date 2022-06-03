#include<bits/stdc++.h>
using namespace std;

int main () {
  ofstream myfile ("example.txt");
  if (myfile.is_open())
  {
      float x=100,y=1,s1=0,s2=0,z;
z=y/x;
for(int i=0;z<100;i++){
    myfile <<i << "   :   "<<z<<setprecision(64)<<endl;
    x=x+100;
    y=y+2;
    z=y/x;
}


  }
  else cout << "Unable to open file";
  return 0;
}
