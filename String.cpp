#include<iostream>
using namespace std;
int main()
{
    char str[20],str2[30];
    cout<<"enter the string"<<endl;
    cin>>str>>str2;
    cout<<str<<" "<<str2;
    return 0;
}

/*2 prob*/
int main1()
{
    char str[20],str2[30];
    cout<<"Enter the string"<<endl;
    gets(str);
    cout<<"Enter the second string"<<endl;
    gets(str2);
    cout<<str<<" "<<str2;
    return 0;
}