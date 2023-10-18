/*3. Write a program to count number of words in string.ptr*/
#include<iostream>
using namespace std;
int words(char *p)
{
    int count =1;
    while(*p!='\0')
    {
        if(*p==' ')
        count++;
        p++;
    }
    return count;
}
int main()
{
    char str[50];
    cout<<"Enter the Words: "<<endl;
    cin.getline(str,50);
    cout<<"Pata lag gya kitne hai: "<<words(str)<<endl;
    return 0;
}