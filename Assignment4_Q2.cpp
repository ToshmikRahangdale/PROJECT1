/*2. Write a program that asks the user to take array of 10 integers. The program must output the largest 
element in the array, and the index at which that element was found.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter int "<<i+1<<" :"<<endl;
        cin>>arr[i];
    }
    int largest=arr[0];
    int index=0;

    for(int i = 1;i<10;i++)
    {
        if(arr[i]>=largest){
            largest = arr[i];
            index = i;
        }
    }
    cout<<"The largest element in the arry is:"<<largest<<endl;
    cout<<"It was found at index: "<<index<<endl;
    return 0;

}