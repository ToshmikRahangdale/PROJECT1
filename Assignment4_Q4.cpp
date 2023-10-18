/* 4.Write a program that asks the user to take array of 10 integers. The program will then display either 
"the array is growing", "the array is decreasing", "the array is constant", or "the array is growing 
and decreasing." */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    bool grow =true;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=arr[i-1])
        {
            grow=false;
        }
    }

    bool desc=true;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])

        {
        desc=false;
        }
    }
    bool cons = true;
    for(int i=1;i<n;i++)
    {
        if(arr[i] != arr[i-1]){
            cons =false;
        }
    }
    if(grow == true)
    {
        cout<<"Array is Growing: "<<endl;
    }
    else if (desc == true)
    {
        cout<<"Array is decresing: "<<endl;
    }
    else if (cons==true)
    {
        cout<<"Array is constant: "<<endl;
    }
    else
    {
        cout<<"Array is growing and decresing"<<endl;
    }
    return 0;
}

