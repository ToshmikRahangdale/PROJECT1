/*5. Write a program which takes 2 arrays of 10 integers each, a and b. c is an array with 20 integers. 
The program should put into c the appending of b to a, the first 10 integers of c from array a, the 
latter 10 from b. Then the program should display c. */
#include<iostream>
using namespace std;
int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10]={11,12,13,14,15,16,17,18,19,20};
    int arr3[20];

    for (int  i = 0; i < 10; i++)
    {
        arr3[i] = arr1[i];
    }
    for(int i=0;i<10;i++)
    {
        arr3[i+10]=arr2[i];
    }
    for (int i = 0; i < 20; i++)
    {
        cout<<arr3[i] <<" ";
    }
}