#include<iostream>
using namespace std;
int main()
{
    char str[20],rev[20];
    cout<<"Enter the string: ";
    cin.getline(str,20);
    int count = 0;
    while (str[count] !='\0'){
        count++;
    }
    for(int i=0; i<count; i++){
        rev[i] = str[count -i-1 ];
    }
    rev[count] = '\0';
    cout<<"Reverse string: "<<endl;
    cout<<rev;
    return 0;
}