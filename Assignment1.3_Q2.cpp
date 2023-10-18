#include<iostream>
using namespace std;

    int main(){
   int num;
   cout<<"Enter the line:";
   cin>>num;
   for(int i=0;i<num;i++)
   {
    for(int j=i;j<num;j++)
    {
        cout<<" ";
    }
    for(int k=0;k<=i;k++){
        cout<<"*";
    }
    cout<<endl;
   }
    }
