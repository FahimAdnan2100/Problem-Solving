
#include<iostream>

using namespace std;

int main(){
int mat[3][3], i, j;
float determinant = 0;

//finding determinant
for(i = 0; i < 3; i++)
determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
cout<<"\n\ndeterminant: "<<determinant;
cout<<"\n\nInverse of matrix is: \n";
for(i = 0; i < 3; i++){
for(j = 0; j < 3; j++)
cout<<((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant<<"\t";
cout<<"\n";
}

   return 0;
}
/*
6 24 1
13 16 10
20 17 15


0.15873 -0.777778       0.507937
0.0113379       0.15873 -0.106576
-0.22449        0.857143        -0.489796
*/
