/*6. Write a program that asks the user to take an array of 10 integer and an integer value V and an 
index value i between 0 and 9. The program must put the value V at the place i in the array, 
shifting each element right and dropping off the last element. The program must then write the 
final array. */
#include<iostream>
using namespace std;
int main()
{
    int n ;
    int arr[10];
    for (int  i = 0; i < n; i++)
    {
        cout<<"Enter the value ";
        cin>>arr[i];
    }
    int value = 20;
    int index = 5;

    for (int i = n-1; i < index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    for (int i = 0; i < n; i++)
    {
        cout<<" result "<<arr[i]<<" "<<endl;
    }
    return 0;
}