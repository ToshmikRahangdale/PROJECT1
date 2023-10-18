/*1. Write a program that asks the user to take array of 10 integers. The program must compute and 
write how many integers are greater than or equal to 10.*/

#include<iostream>
using namespace std;
int main()
{
    int arr[10];//decleare the array of 10 integers.
    int count = 0;
    for(int i=0;i<10;i++)//prompt the user to input 10 int
    {
        cout<<"Enter int :"<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i = 0;i<10;i++)
    {
        if(arr[i]<=10)
        {
            count++;//
        }
    }
    cout<<"The number of int greater then or equal to 10 is :"<<count<<endl;
    return 0;
}
