/*2. Write a program to display string from backward.pointer*/
#include<iostream>
using namespace std;
int main()
{
    char str[20],*ptr;
    cout<<"Enter the str:";
    cin.getline(str,20);
    ptr = str;
    int count = 0;
    while(*ptr != '\0'){
        count++;
        ptr++;
    }

    for(int i=count;i>=0;i--)
    {
        cout<<*ptr;
        ptr--;
    }
    return 0;
}