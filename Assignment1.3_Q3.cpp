#include<iostream>
using namespace std;
int main()
{
   int i,j,space,s;
   for(space = 10,i=1;space>1 && i<=6;space--,i++)
   {
    for(s=1;s<=space;s++)
    cout<<" ";
    for(j=1;j<i;j++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
   }
   return 0;
}