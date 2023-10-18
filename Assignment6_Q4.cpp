/*4. Write a program to concatenate one string contents to another.*/
#include<iostream>
using namespace std;
int main()
{

    char s1[30],s2[30];
    char* ptr1 =s1;
    char* ptr2 =s2;
    cout<<"Enter string 1: ";
    cin.getline(s1,30);
    cout<<"Enter string 2: ";
    cin.getline(s2,30);
    while (*ptr1 != '\0')
    {
        ptr1++;
    }
    while (*ptr2 != '\0')
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    //ptr1 = '\0';
    cout<<"concate string: "<<s1<<s2;
    return 0;
}
