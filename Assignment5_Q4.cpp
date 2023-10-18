/*4. Write a program to concatenate one string contents to another. */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char string1[30];
    char string2[30];

    cout<<"Enter the string 1: ";
    cin.getline(string1,sizeof(string1));

    cout<<"Enter the string 2: ";
    cin.getline(string2,sizeof(string2));

    strcat(string1,string2);
    cout<<"concatenated string: "<<string1;
    return 0;
}
