/*6. Write a program to check a string is palindrome or not.pointer*/
#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter the string: ";
    cin.getline(str,20);

    char *ptr1 = str;
    char *ptr2 = str;

    int count = 0;
    while(*ptr2 != '\0')
    {
        count++;
        ptr2++;
    }
    ptr2--;
    int flag =1;
    for (int i = 0; i < count/2; i++)
    {
        if(*ptr1 != *ptr2)
        { 
            flag = 0;
            break;
        }
        ptr1++;
        ptr2--;
    }
    if(flag == 1)
    cout<<"Is a palindrom: "<<str<<endl;
    else
    cout<<"is not a palindrom: "<<str<<endl;
    return 0;
}