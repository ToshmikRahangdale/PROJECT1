#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of line:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=2;k<=i;k++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            if(j==n-1 && i == 0){
                continue;
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}