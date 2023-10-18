/*9. Write a program to convert a string in lowercase.*/
#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter the string: "<<endl;
    cin.getline(str,20);
    int count=0;
    char ch[20]={0};
    while(str[count]!='\0'){
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if(str[i] >='A' && str[i] <='Z'){ 
        ch[i]=str[i]+32;
    }
    else
    {
        ch[i]=str[i];
    }
  }
  cout<<"String in lower case: "<<endl;
  cout<<ch;
  return 0;
}  