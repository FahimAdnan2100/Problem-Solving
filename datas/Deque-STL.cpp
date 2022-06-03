#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,a,b,arr[10010],arr1[10010],arr2[10010],k=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        for(int i=0;i<a-b+1;i++){

            for(int j=i;j<i+b;j++){
                //cout<<arr[j]<<" ";
            }
            //cout<<endl<<endl;
            arr2[k]=*max_element(arr+i,arr+i+b);
            k++;
            //cout<<arr2[k]<<" "<<endl;

        }
        //cout<<arr2[0];
        for(int i=0;i<k;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
        free(arr);
        free(arr2);
        k=0;

    }






}

