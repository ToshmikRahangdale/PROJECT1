/*7. Write a program to find a substring within a string. If found display its starting position.*/
#include<iostream>
using namespace std;
int main(){
    char str[150],substr[100];
    cout<<"Enter the string: ";
    cin.getline(str,150);

    cout<<"Enter substr to serching for: ";
    cin.getline(substr,100);

    char* strptr = str;
    char* subptr = substr;
    int place = -1;

    while(*strptr != '\0'){
        char* tempstr = strptr;
        while(*tempstr == *subptr && *tempstr != '\0' && *subptr != '\0'){
            tempstr++;
            subptr++;
        }
        if(*subptr == '\0'){ 
            place = strptr - str;
            break;
        }
        subptr = substr;
        strptr++;
    }
    if(place != -1){
        cout<<"Substring found at has place: "<<place<<endl;
    }
    else{
        cout<<"Substring not found: "<<endl;
    }
    return 0;
}
