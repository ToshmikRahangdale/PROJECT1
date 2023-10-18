/*. Write a program that asks the user to take array of 10 integers. The program will then sort the array 
in descending order and display it. */
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter int:"<<i+1<<" :"<<endl;
        cin>>arr[i];
    }
    sort(arr,arr+10,greater<int>());
    cout<<"sort the array in descending order:";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}