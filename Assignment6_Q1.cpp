/*1. Write a program to find the length of string. pointer*/
#include<iostream>
using namespace std;
int length(char *str)
{
    char *ptr = str;
    int count =0;
    while(*ptr != '\0')
    {
        count++;
        ptr++;
    }
    return count;
}
int main()
{
    char str[30];
    cout<<"Enter the string: ";
    cin.getline(str,30);
    cout<<"The length of the string is: "<<length(str)<<endl;
    return 0;
}