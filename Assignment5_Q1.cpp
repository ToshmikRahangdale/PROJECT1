/*1. Write a program to find the length of string. */
#include <iostream>

using namespace std;

int main() {
    char inputString[1000];

    
    cout << "Enter a string: ";
    cin.getline(inputString, sizeof(inputString));

    int length = 0;


    for (int i = 0; inputString[i] != '\0'; i++) {
        length++;
    }

    cout << "Length of the string: " << length << endl;

    return 0;
}
