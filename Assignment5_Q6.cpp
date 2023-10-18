/*6. Write a program to check a string is palindrome or not.*/
#include<iostream>
using namespace std;
int main()
{
    char str[30];
    cout<<"Enter the char_String: ";
    cin.getline(str,20);
    int count  = 0,flag = 0;
    while(str[count] != '\0')
    { 
        count++;
    }
    for(int i=0;i<count;i++){
        if(str[i]!= str[count - i-1]){
            flag= 1;
            break; 
        }
    }
    if(flag){
        cout<<"Not plindrom String: ";
    }
    else
    {
        cout<<"plindrom string:";
    }
    return 0;

}