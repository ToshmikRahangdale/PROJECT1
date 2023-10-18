/*9. Write a program to convert a string in lowercase.*/
#include<iostream>
using namespace std;
int main()
{
    char str[313];
    cout<<"Enter the upprecase char: ";
    cin.getline(str,313);

    char* ptr = str;
    while(*ptr !='\0'){
        if(*ptr >='A' && *ptr <= 'Z'){
            *ptr += 'a' - 'A';
        }ptr++;
    }
    cout<<"String in lowercase: "<<str<<endl;
    return 0;
}