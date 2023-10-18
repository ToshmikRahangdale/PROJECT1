/*8. Write a program to reverse a string.*/
#include<iostream>
using namespace std;
int main()
{
    char inputString[100];
    cout<<"Enter the string: ";
    cin.getline(inputString,100);

    char* startPtr = inputString;
    char* endPtr = inputString;

    while (*endPtr != '\0')
    {
        endPtr++;
    }
    endPtr--;

    while(startPtr< endPtr){
        char temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;

        startPtr++;
        endPtr--;
    }
    cout<<"Reverse String: "<<inputString<<endl;
    return 0;
}