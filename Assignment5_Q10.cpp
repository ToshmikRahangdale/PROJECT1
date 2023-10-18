/*10. Write a program to convert a string in uppercase.*/
#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter the string: ";
    cin.getline(str,20);
    int count= 0;
    char ch[20] ={0};
    while (str[count]!='\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            ch[i]=str[i]-32;
        }
        else
        {
            ch[i]=str[i];
        }
    }
    cout<<"String in upper case:"<<endl;
    cout<<ch;
    return 0;
}