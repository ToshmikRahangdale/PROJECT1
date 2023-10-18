/*5. Write a program to compare two strings they are exact equal or not.*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[30];
    char str2[30]; 

    cout<<"Enter first string: ";
    cin.getline(str1,30);
    cout<<"Enter second string: ";
    cin.getline(str2,30);

    int compare = strcmp(str1,str2);
    if(compare == 0 )
    {
        cout<<"The string are exact equal: "<<endl;
    }
    else
    {
        cout<<"The string are not equal: "<<endl;
    }
    return 0;
}