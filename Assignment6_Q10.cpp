/*10. Write a program to convert a string in uppercase.*/
#include<iostream>
using namespace std;
int main()
{
    char str[313];
    cout<<"Enter the lowercase char: ";
    cin.getline(str,313);

    char* ptr = str;
    while(*ptr !='\0'){
        if(*ptr >='a' && *ptr <= 'z'){
            *ptr += 'A' - 'a';
        }ptr++;
    }
    cout<<"String in uppercase: "<<str<<endl;
    return 0;
}